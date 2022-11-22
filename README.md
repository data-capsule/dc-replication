# dc-replication
DataCapsule Replication for Paranoid Stateful Lambda (PSL) / Global Data Plane (GDP)

# How to build and run

Run all commands on this directory.

```bash
docker build -t dc-server .
docker run -it --rm --net=host -v .:/opt/dc_server dc_server /bin/bash
```

Then inside container:

```bash
mkdir -p build/ && cd build/
cmake ../src/
make -j4

./dc-server
```