/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef  _MyServicePrioParent_H
#define  _MyServicePrioParent_H

#include <thrift/lib/cpp/TDispatchProcessor.h>
#include <folly/ExceptionWrapper.h>
#include "thrift/compiler/test/fixtures/basic/gen-cpp/module_types.h"



class MyServicePrioParentIf {
 public:
  virtual ~MyServicePrioParentIf() {}
  virtual void ping() = 0;
  virtual void pong() = 0;
};

class MyServicePrioParentIfFactory {
 public:
  typedef MyServicePrioParentIf Handler;

  virtual ~MyServicePrioParentIfFactory() {}

  virtual MyServicePrioParentIf* getHandler(::apache::thrift::server::TConnectionContext* ctx) = 0;
  virtual void releaseHandler(MyServicePrioParentIf* /*handler*/) = 0;
};

class MyServicePrioParentIfSingletonFactory : virtual public MyServicePrioParentIfFactory {
 public:
  MyServicePrioParentIfSingletonFactory(const std::shared_ptr<MyServicePrioParentIf>& iface) : iface_(iface) {}
  virtual ~MyServicePrioParentIfSingletonFactory() {}

  virtual MyServicePrioParentIf* getHandler(::apache::thrift::server::TConnectionContext*) {
    return iface_.get();
  }
  virtual void releaseHandler(MyServicePrioParentIf* /*handler*/) {}

 protected:
  std::shared_ptr<MyServicePrioParentIf> iface_;
};

class MyServicePrioParentNull : virtual public MyServicePrioParentIf {
 public:
  virtual ~MyServicePrioParentNull() {}
  void ping() {
    return;
  }
  void pong() {
    return;
  }
};

class MyServicePrioParent_ping_args : public apache::thrift::TStructType<MyServicePrioParent_ping_args> {
 public:

  static const uint64_t _reflection_id = 15158865162347410572U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  MyServicePrioParent_ping_args() {
  }

  MyServicePrioParent_ping_args(const MyServicePrioParent_ping_args&) = default;
  MyServicePrioParent_ping_args& operator=(const MyServicePrioParent_ping_args& src)= default;
  MyServicePrioParent_ping_args(MyServicePrioParent_ping_args&&) = default;
  MyServicePrioParent_ping_args& operator=(MyServicePrioParent_ping_args&&) = default;

  void __clear();

  virtual ~MyServicePrioParent_ping_args() noexcept {}


  bool operator == (const MyServicePrioParent_ping_args &) const;
  bool operator != (const MyServicePrioParent_ping_args& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MyServicePrioParent_ping_args & ) const;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};

class MyServicePrioParent_ping_args;
void merge(const MyServicePrioParent_ping_args& from, MyServicePrioParent_ping_args& to);
void merge(MyServicePrioParent_ping_args&& from, MyServicePrioParent_ping_args& to);
class MyServicePrioParent_ping_pargs : public apache::thrift::TStructType<MyServicePrioParent_ping_pargs> {
 public:

  static const uint64_t _reflection_id = 11775803641217596972U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  MyServicePrioParent_ping_pargs() = default;

  virtual ~MyServicePrioParent_ping_pargs() noexcept {}


  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};

class MyServicePrioParent_ping_pargs;
void merge(const MyServicePrioParent_ping_pargs& from, MyServicePrioParent_ping_pargs& to);
void merge(MyServicePrioParent_ping_pargs&& from, MyServicePrioParent_ping_pargs& to);
class MyServicePrioParent_ping_presult : public apache::thrift::TStructType<MyServicePrioParent_ping_presult> {
 public:

  static const uint64_t _reflection_id = 1987822334736715596U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  MyServicePrioParent_ping_presult() = default;

  virtual ~MyServicePrioParent_ping_presult() noexcept {}


  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};

class MyServicePrioParent_ping_presult;
void merge(const MyServicePrioParent_ping_presult& from, MyServicePrioParent_ping_presult& to);
void merge(MyServicePrioParent_ping_presult&& from, MyServicePrioParent_ping_presult& to);
class MyServicePrioParent_pong_args : public apache::thrift::TStructType<MyServicePrioParent_pong_args> {
 public:

  static const uint64_t _reflection_id = 9845490327892903980U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  MyServicePrioParent_pong_args() {
  }

  MyServicePrioParent_pong_args(const MyServicePrioParent_pong_args&) = default;
  MyServicePrioParent_pong_args& operator=(const MyServicePrioParent_pong_args& src)= default;
  MyServicePrioParent_pong_args(MyServicePrioParent_pong_args&&) = default;
  MyServicePrioParent_pong_args& operator=(MyServicePrioParent_pong_args&&) = default;

  void __clear();

  virtual ~MyServicePrioParent_pong_args() noexcept {}


  bool operator == (const MyServicePrioParent_pong_args &) const;
  bool operator != (const MyServicePrioParent_pong_args& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MyServicePrioParent_pong_args & ) const;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};

class MyServicePrioParent_pong_args;
void merge(const MyServicePrioParent_pong_args& from, MyServicePrioParent_pong_args& to);
void merge(MyServicePrioParent_pong_args&& from, MyServicePrioParent_pong_args& to);
class MyServicePrioParent_pong_pargs : public apache::thrift::TStructType<MyServicePrioParent_pong_pargs> {
 public:

  static const uint64_t _reflection_id = 17598621816419220940U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  MyServicePrioParent_pong_pargs() = default;

  virtual ~MyServicePrioParent_pong_pargs() noexcept {}


  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};

class MyServicePrioParent_pong_pargs;
void merge(const MyServicePrioParent_pong_pargs& from, MyServicePrioParent_pong_pargs& to);
void merge(MyServicePrioParent_pong_pargs&& from, MyServicePrioParent_pong_pargs& to);
class MyServicePrioParent_pong_presult : public apache::thrift::TStructType<MyServicePrioParent_pong_presult> {
 public:

  static const uint64_t _reflection_id = 2551766680163974924U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  MyServicePrioParent_pong_presult() = default;

  virtual ~MyServicePrioParent_pong_presult() noexcept {}


  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};

class MyServicePrioParent_pong_presult;
void merge(const MyServicePrioParent_pong_presult& from, MyServicePrioParent_pong_presult& to);
void merge(MyServicePrioParent_pong_presult&& from, MyServicePrioParent_pong_presult& to);
class MyServicePrioParentClient : virtual public MyServicePrioParentIf, virtual public apache::thrift::TClientBase {
 public:
  MyServicePrioParentClient(std::shared_ptr<apache::thrift::protocol::TProtocol> prot) :
    checkSeqid_(true),
    nextSendSequenceId_(1),
    nextRecvSequenceId_(1),
    piprot_(prot),
    poprot_(prot) {
    iprot_ = prot.get();
    oprot_ = prot.get();
    connectionContext_ = std::shared_ptr<TClientBase::ConnContext>(
      new TClientBase::ConnContext(piprot_, poprot_));
  }
  MyServicePrioParentClient(std::shared_ptr<apache::thrift::protocol::TProtocol> iprot, std::shared_ptr<apache::thrift::protocol::TProtocol> oprot) :
    checkSeqid_(true),
    nextSendSequenceId_(1),
    nextRecvSequenceId_(1),
    piprot_(iprot),
    poprot_(oprot) {
    iprot_ = iprot.get();
    oprot_ = oprot.get();
    connectionContext_ = std::shared_ptr<TClientBase::ConnContext>(
      new TClientBase::ConnContext(piprot_, poprot_));
  }
  std::shared_ptr<apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr<apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  virtual ~MyServicePrioParentClient() {}
  void ping();
  virtual void send_ping();
  virtual void recv_ping();
  virtual folly::exception_wrapper recv_wrapped_ping();
  void pong();
  virtual void send_pong();
  virtual void recv_pong();
  virtual folly::exception_wrapper recv_wrapped_pong();
  apache::thrift::server::TConnectionContext* getConnectionContext() {
    return connectionContext_.get();
  }

  /**
   * Disable checking the seqid field in server responses.
   *
   * This should only be used with broken servers that return incorrect seqid values.
   */
  void _disableSequenceIdChecks() {
    checkSeqid_ = false;
  }

 protected:
  bool checkSeqid_;
  int32_t nextSendSequenceId_;
  int32_t nextRecvSequenceId_;
  int32_t getNextSendSequenceId();
  int32_t getNextRecvSequenceId();
  std::shared_ptr<apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr<apache::thrift::protocol::TProtocol> poprot_;
  apache::thrift::protocol::TProtocol* iprot_;
  apache::thrift::protocol::TProtocol* oprot_;
  std::shared_ptr<apache::thrift::server::TConnectionContext> connectionContext_;
  virtual const char* getServiceName();
};

class MyServicePrioParentProcessor : public ::apache::thrift::TDispatchProcessor {
 public:
  virtual const char* getServiceName() {
    return "MyServicePrioParent";
  }
 protected:
  std::shared_ptr<MyServicePrioParentIf> iface_;
  virtual bool dispatchCall(apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, apache::thrift::server::TConnectionContext* connectionContext);
 private:
  typedef  void (MyServicePrioParentProcessor::*ProcessFunction)(int32_t, apache::thrift::protocol::TProtocol*, apache::thrift::protocol::TProtocol*, apache::thrift::server::TConnectionContext*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_ping(int32_t seqid, apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, apache::thrift::server::TConnectionContext* connectionContext);
  void process_pong(int32_t seqid, apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, apache::thrift::server::TConnectionContext* connectionContext);
 public:
  MyServicePrioParentProcessor(std::shared_ptr<MyServicePrioParentIf> iface) :
    iface_(iface) {
    processMap_["ping"] = &MyServicePrioParentProcessor::process_ping;
    processMap_["pong"] = &MyServicePrioParentProcessor::process_pong;
  }

  virtual ~MyServicePrioParentProcessor() {}

  std::shared_ptr<std::set<std::string> > getProcessFunctions() { 
    std::shared_ptr<std::set<std::string> > rSet(new std::set<std::string>());
    rSet->insert("MyServicePrioParent.ping");
    rSet->insert("MyServicePrioParent.pong");
    return rSet;
  }
};

class MyServicePrioParentProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  MyServicePrioParentProcessorFactory(const ::std::shared_ptr< MyServicePrioParentIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::std::shared_ptr< ::apache::thrift::TProcessor > getProcessor(::apache::thrift::server::TConnectionContext* ctx);

 protected:
  ::std::shared_ptr< MyServicePrioParentIfFactory > handlerFactory_;
};

class MyServicePrioParentMultiface : virtual public MyServicePrioParentIf {
 public:
  MyServicePrioParentMultiface(std::vector<std::shared_ptr<MyServicePrioParentIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~MyServicePrioParentMultiface() {}
 protected:
  std::vector<std::shared_ptr<MyServicePrioParentIf> > ifaces_;
  MyServicePrioParentMultiface() {}
  void add(std::shared_ptr<MyServicePrioParentIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void ping() {
    uint32_t thrift_multifaces_index_tmp_;
    uint32_t thrift_multifaces_size_tmp_ = ifaces_.size();
    for (thrift_multifaces_index_tmp_ = 0; thrift_multifaces_index_tmp_ < thrift_multifaces_size_tmp_; ++thrift_multifaces_index_tmp_) {
      ifaces_[thrift_multifaces_index_tmp_]->ping();
    }
  }

  void pong() {
    uint32_t thrift_multifaces_index_tmp_;
    uint32_t thrift_multifaces_size_tmp_ = ifaces_.size();
    for (thrift_multifaces_index_tmp_ = 0; thrift_multifaces_index_tmp_ < thrift_multifaces_size_tmp_; ++thrift_multifaces_index_tmp_) {
      ifaces_[thrift_multifaces_index_tmp_]->pong();
    }
  }

};



#endif
