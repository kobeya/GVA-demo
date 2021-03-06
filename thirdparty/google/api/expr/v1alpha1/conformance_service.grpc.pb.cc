// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/api/expr/v1alpha1/conformance_service.proto

#include "google/api/expr/v1alpha1/conformance_service.pb.h"
#include "google/api/expr/v1alpha1/conformance_service.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace google {
namespace api {
namespace expr {
namespace v1alpha1 {

static const char* ConformanceService_method_names[] = {
  "/google.api.expr.v1alpha1.ConformanceService/Parse",
  "/google.api.expr.v1alpha1.ConformanceService/Check",
  "/google.api.expr.v1alpha1.ConformanceService/Eval",
};

std::unique_ptr< ConformanceService::Stub> ConformanceService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< ConformanceService::Stub> stub(new ConformanceService::Stub(channel));
  return stub;
}

ConformanceService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Parse_(ConformanceService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Check_(ConformanceService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Eval_(ConformanceService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ConformanceService::Stub::Parse(::grpc::ClientContext* context, const ::google::api::expr::v1alpha1::ParseRequest& request, ::google::api::expr::v1alpha1::ParseResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Parse_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::api::expr::v1alpha1::ParseResponse>* ConformanceService::Stub::AsyncParseRaw(::grpc::ClientContext* context, const ::google::api::expr::v1alpha1::ParseRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::api::expr::v1alpha1::ParseResponse>::Create(channel_.get(), cq, rpcmethod_Parse_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::api::expr::v1alpha1::ParseResponse>* ConformanceService::Stub::PrepareAsyncParseRaw(::grpc::ClientContext* context, const ::google::api::expr::v1alpha1::ParseRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::api::expr::v1alpha1::ParseResponse>::Create(channel_.get(), cq, rpcmethod_Parse_, context, request, false);
}

::grpc::Status ConformanceService::Stub::Check(::grpc::ClientContext* context, const ::google::api::expr::v1alpha1::CheckRequest& request, ::google::api::expr::v1alpha1::CheckResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Check_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::api::expr::v1alpha1::CheckResponse>* ConformanceService::Stub::AsyncCheckRaw(::grpc::ClientContext* context, const ::google::api::expr::v1alpha1::CheckRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::api::expr::v1alpha1::CheckResponse>::Create(channel_.get(), cq, rpcmethod_Check_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::api::expr::v1alpha1::CheckResponse>* ConformanceService::Stub::PrepareAsyncCheckRaw(::grpc::ClientContext* context, const ::google::api::expr::v1alpha1::CheckRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::api::expr::v1alpha1::CheckResponse>::Create(channel_.get(), cq, rpcmethod_Check_, context, request, false);
}

::grpc::Status ConformanceService::Stub::Eval(::grpc::ClientContext* context, const ::google::api::expr::v1alpha1::EvalRequest& request, ::google::api::expr::v1alpha1::EvalResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Eval_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::api::expr::v1alpha1::EvalResponse>* ConformanceService::Stub::AsyncEvalRaw(::grpc::ClientContext* context, const ::google::api::expr::v1alpha1::EvalRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::api::expr::v1alpha1::EvalResponse>::Create(channel_.get(), cq, rpcmethod_Eval_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::api::expr::v1alpha1::EvalResponse>* ConformanceService::Stub::PrepareAsyncEvalRaw(::grpc::ClientContext* context, const ::google::api::expr::v1alpha1::EvalRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::api::expr::v1alpha1::EvalResponse>::Create(channel_.get(), cq, rpcmethod_Eval_, context, request, false);
}

ConformanceService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ConformanceService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ConformanceService::Service, ::google::api::expr::v1alpha1::ParseRequest, ::google::api::expr::v1alpha1::ParseResponse>(
          std::mem_fn(&ConformanceService::Service::Parse), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ConformanceService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ConformanceService::Service, ::google::api::expr::v1alpha1::CheckRequest, ::google::api::expr::v1alpha1::CheckResponse>(
          std::mem_fn(&ConformanceService::Service::Check), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ConformanceService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ConformanceService::Service, ::google::api::expr::v1alpha1::EvalRequest, ::google::api::expr::v1alpha1::EvalResponse>(
          std::mem_fn(&ConformanceService::Service::Eval), this)));
}

ConformanceService::Service::~Service() {
}

::grpc::Status ConformanceService::Service::Parse(::grpc::ServerContext* context, const ::google::api::expr::v1alpha1::ParseRequest* request, ::google::api::expr::v1alpha1::ParseResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ConformanceService::Service::Check(::grpc::ServerContext* context, const ::google::api::expr::v1alpha1::CheckRequest* request, ::google::api::expr::v1alpha1::CheckResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ConformanceService::Service::Eval(::grpc::ServerContext* context, const ::google::api::expr::v1alpha1::EvalRequest* request, ::google::api::expr::v1alpha1::EvalResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace api
}  // namespace expr
}  // namespace v1alpha1

