ARG debian_snapshot=buster-20201012

FROM debian/snapshot:${debian_snapshot}

RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get install -y apt-utils && \
    apt-get install -y build-essential && \
    apt-get install -y git && \
    apt-get install -y vim && \
    apt-get install -y cmake && \
    apt-get install -y protobuf-compiler && \
    apt-get install -y libzmq3-dev && \
    apt-get install -y librocksdb-dev && \
    apt-get install -y libgflags-dev && \
    apt-get install -y libssl-dev

RUN apt-get install -y autoconf libtool pkg-config
RUN git clone --recurse-submodules -b v1.50.0 --depth 1 --shallow-submodules https://github.com/grpc/grpc /var/lib/grpc
RUN mkdir -p /var/lib/grpc/cmake/build

WORKDIR /var/lib/grpc/cmake/build

RUN cmake -DgRPC_INSTALL=ON \
    -DgRPC_BUILD_TESTS=OFF \
    -DCMAKE_INSTALL_PREFIX=/usr/local/ \
    ../..

RUN make -j
RUN make install

#install cmake v3.20.4
ADD https://cmake.org/files/v3.20/cmake-3.20.4-linux-x86_64.sh /cmake-3.20.4-linux-x86_64.sh
RUN mkdir /opt/cmake
RUN sh /cmake-3.20.4-linux-x86_64.sh --prefix=/opt/cmake --skip-license
RUN ln -s /opt/cmake/bin/cmake /usr/local/bin/cmake
RUN cmake --version

RUN mkdir -p /opt/dc_server
WORKDIR /opt/dc_server

CMD ["/bin/bash"]
