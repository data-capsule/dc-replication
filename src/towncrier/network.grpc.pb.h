// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: network.proto
#ifndef GRPC_network_2eproto__INCLUDED
#define GRPC_network_2eproto__INCLUDED

#include "network.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace network {

class NetworkExchange final {
 public:
  static constexpr char const* service_full_name() {
    return "network.NetworkExchange";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    std::unique_ptr< ::grpc::ClientWriterInterface< ::network::PDU>> Send(::grpc::ClientContext* context, ::network::FIN* response) {
      return std::unique_ptr< ::grpc::ClientWriterInterface< ::network::PDU>>(SendRaw(context, response));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::network::PDU>> AsyncSend(::grpc::ClientContext* context, ::network::FIN* response, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::network::PDU>>(AsyncSendRaw(context, response, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::network::PDU>> PrepareAsyncSend(::grpc::ClientContext* context, ::network::FIN* response, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::network::PDU>>(PrepareAsyncSendRaw(context, response, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderInterface< ::network::PDU>> Recv(::grpc::ClientContext* context, const ::network::SYN& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::network::PDU>>(RecvRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::network::PDU>> AsyncRecv(::grpc::ClientContext* context, const ::network::SYN& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::network::PDU>>(AsyncRecvRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::network::PDU>> PrepareAsyncRecv(::grpc::ClientContext* context, const ::network::SYN& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::network::PDU>>(PrepareAsyncRecvRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void Send(::grpc::ClientContext* context, ::network::FIN* response, ::grpc::ClientWriteReactor< ::network::PDU>* reactor) = 0;
      virtual void Recv(::grpc::ClientContext* context, const ::network::SYN* request, ::grpc::ClientReadReactor< ::network::PDU>* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientWriterInterface< ::network::PDU>* SendRaw(::grpc::ClientContext* context, ::network::FIN* response) = 0;
    virtual ::grpc::ClientAsyncWriterInterface< ::network::PDU>* AsyncSendRaw(::grpc::ClientContext* context, ::network::FIN* response, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncWriterInterface< ::network::PDU>* PrepareAsyncSendRaw(::grpc::ClientContext* context, ::network::FIN* response, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderInterface< ::network::PDU>* RecvRaw(::grpc::ClientContext* context, const ::network::SYN& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::network::PDU>* AsyncRecvRaw(::grpc::ClientContext* context, const ::network::SYN& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::network::PDU>* PrepareAsyncRecvRaw(::grpc::ClientContext* context, const ::network::SYN& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    std::unique_ptr< ::grpc::ClientWriter< ::network::PDU>> Send(::grpc::ClientContext* context, ::network::FIN* response) {
      return std::unique_ptr< ::grpc::ClientWriter< ::network::PDU>>(SendRaw(context, response));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriter< ::network::PDU>> AsyncSend(::grpc::ClientContext* context, ::network::FIN* response, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncWriter< ::network::PDU>>(AsyncSendRaw(context, response, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriter< ::network::PDU>> PrepareAsyncSend(::grpc::ClientContext* context, ::network::FIN* response, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncWriter< ::network::PDU>>(PrepareAsyncSendRaw(context, response, cq));
    }
    std::unique_ptr< ::grpc::ClientReader< ::network::PDU>> Recv(::grpc::ClientContext* context, const ::network::SYN& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::network::PDU>>(RecvRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::network::PDU>> AsyncRecv(::grpc::ClientContext* context, const ::network::SYN& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::network::PDU>>(AsyncRecvRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::network::PDU>> PrepareAsyncRecv(::grpc::ClientContext* context, const ::network::SYN& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::network::PDU>>(PrepareAsyncRecvRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void Send(::grpc::ClientContext* context, ::network::FIN* response, ::grpc::ClientWriteReactor< ::network::PDU>* reactor) override;
      void Recv(::grpc::ClientContext* context, const ::network::SYN* request, ::grpc::ClientReadReactor< ::network::PDU>* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientWriter< ::network::PDU>* SendRaw(::grpc::ClientContext* context, ::network::FIN* response) override;
    ::grpc::ClientAsyncWriter< ::network::PDU>* AsyncSendRaw(::grpc::ClientContext* context, ::network::FIN* response, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncWriter< ::network::PDU>* PrepareAsyncSendRaw(::grpc::ClientContext* context, ::network::FIN* response, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReader< ::network::PDU>* RecvRaw(::grpc::ClientContext* context, const ::network::SYN& request) override;
    ::grpc::ClientAsyncReader< ::network::PDU>* AsyncRecvRaw(::grpc::ClientContext* context, const ::network::SYN& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::network::PDU>* PrepareAsyncRecvRaw(::grpc::ClientContext* context, const ::network::SYN& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Send_;
    const ::grpc::internal::RpcMethod rpcmethod_Recv_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Send(::grpc::ServerContext* context, ::grpc::ServerReader< ::network::PDU>* reader, ::network::FIN* response);
    virtual ::grpc::Status Recv(::grpc::ServerContext* context, const ::network::SYN* request, ::grpc::ServerWriter< ::network::PDU>* writer);
  };
  template <class BaseClass>
  class WithAsyncMethod_Send : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Send() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Send() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Send(::grpc::ServerContext* /*context*/, ::grpc::ServerReader< ::network::PDU>* /*reader*/, ::network::FIN* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSend(::grpc::ServerContext* context, ::grpc::ServerAsyncReader< ::network::FIN, ::network::PDU>* reader, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncClientStreaming(0, context, reader, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Recv : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Recv() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Recv() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Recv(::grpc::ServerContext* /*context*/, const ::network::SYN* /*request*/, ::grpc::ServerWriter< ::network::PDU>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestRecv(::grpc::ServerContext* context, ::network::SYN* request, ::grpc::ServerAsyncWriter< ::network::PDU>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(1, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Send<WithAsyncMethod_Recv<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_Send : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Send() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackClientStreamingHandler< ::network::PDU, ::network::FIN>(
            [this](
                   ::grpc::CallbackServerContext* context, ::network::FIN* response) { return this->Send(context, response); }));
    }
    ~WithCallbackMethod_Send() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Send(::grpc::ServerContext* /*context*/, ::grpc::ServerReader< ::network::PDU>* /*reader*/, ::network::FIN* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerReadReactor< ::network::PDU>* Send(
      ::grpc::CallbackServerContext* /*context*/, ::network::FIN* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_Recv : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Recv() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackServerStreamingHandler< ::network::SYN, ::network::PDU>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::network::SYN* request) { return this->Recv(context, request); }));
    }
    ~WithCallbackMethod_Recv() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Recv(::grpc::ServerContext* /*context*/, const ::network::SYN* /*request*/, ::grpc::ServerWriter< ::network::PDU>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::network::PDU>* Recv(
      ::grpc::CallbackServerContext* /*context*/, const ::network::SYN* /*request*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_Send<WithCallbackMethod_Recv<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Send : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Send() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Send() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Send(::grpc::ServerContext* /*context*/, ::grpc::ServerReader< ::network::PDU>* /*reader*/, ::network::FIN* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Recv : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Recv() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Recv() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Recv(::grpc::ServerContext* /*context*/, const ::network::SYN* /*request*/, ::grpc::ServerWriter< ::network::PDU>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Send : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Send() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Send() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Send(::grpc::ServerContext* /*context*/, ::grpc::ServerReader< ::network::PDU>* /*reader*/, ::network::FIN* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSend(::grpc::ServerContext* context, ::grpc::ServerAsyncReader< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* reader, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncClientStreaming(0, context, reader, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Recv : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Recv() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_Recv() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Recv(::grpc::ServerContext* /*context*/, const ::network::SYN* /*request*/, ::grpc::ServerWriter< ::network::PDU>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestRecv(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncWriter< ::grpc::ByteBuffer>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(1, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Send : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Send() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackClientStreamingHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, ::grpc::ByteBuffer* response) { return this->Send(context, response); }));
    }
    ~WithRawCallbackMethod_Send() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Send(::grpc::ServerContext* /*context*/, ::grpc::ServerReader< ::network::PDU>* /*reader*/, ::network::FIN* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerReadReactor< ::grpc::ByteBuffer>* Send(
      ::grpc::CallbackServerContext* /*context*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Recv : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Recv() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackServerStreamingHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const::grpc::ByteBuffer* request) { return this->Recv(context, request); }));
    }
    ~WithRawCallbackMethod_Recv() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Recv(::grpc::ServerContext* /*context*/, const ::network::SYN* /*request*/, ::grpc::ServerWriter< ::network::PDU>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::grpc::ByteBuffer>* Recv(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/)  { return nullptr; }
  };
  typedef Service StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_Recv : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithSplitStreamingMethod_Recv() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::SplitServerStreamingHandler<
          ::network::SYN, ::network::PDU>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerSplitStreamer<
                     ::network::SYN, ::network::PDU>* streamer) {
                       return this->StreamedRecv(context,
                         streamer);
                  }));
    }
    ~WithSplitStreamingMethod_Recv() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Recv(::grpc::ServerContext* /*context*/, const ::network::SYN* /*request*/, ::grpc::ServerWriter< ::network::PDU>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedRecv(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::network::SYN,::network::PDU>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_Recv<Service > SplitStreamedService;
  typedef WithSplitStreamingMethod_Recv<Service > StreamedService;
};

}  // namespace network


#endif  // GRPC_network_2eproto__INCLUDED