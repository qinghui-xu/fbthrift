/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "src/gen-cpp2/module_types.h"
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/lib/cpp/transport/THeader.h>
#include <thrift/lib/cpp2/server/Cpp2ConnContext.h>
#include <thrift/lib/cpp2/GeneratedCodeHelper.h>
#include <thrift/lib/cpp2/GeneratedSerializationCodeHelper.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace cpp2 {

} // cpp2
namespace std {

} // std
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template <class Protocol_>
uint32_t SmallStruct::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      this->translateFieldName(_fname, fid, _ftype);
    }
    switch (fid) {
      case 1:
      {
        if (_ftype == apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->small_A);
          this->__isset.small_A = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 2:
      {
        if (_ftype == apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->small_B);
          this->__isset.small_B = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(_ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t SmallStruct::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("SmallStruct");
  xfer += prot_->serializedFieldSize("small_A", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->serializedSizeBool(this->small_A);
  xfer += prot_->serializedFieldSize("small_B", apache::thrift::protocol::T_I32, 2);
  xfer += prot_->serializedSizeI32(this->small_B);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t SmallStruct::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("SmallStruct");
  xfer += prot_->serializedFieldSize("small_A", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->serializedSizeBool(this->small_A);
  xfer += prot_->serializedFieldSize("small_B", apache::thrift::protocol::T_I32, 2);
  xfer += prot_->serializedSizeI32(this->small_B);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t SmallStruct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("SmallStruct");
  xfer += prot_->writeFieldBegin("small_A", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->writeBool(this->small_A);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("small_B", apache::thrift::protocol::T_I32, 2);
  xfer += prot_->writeI32(this->small_B);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template <class Protocol_>
uint32_t containerStruct::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      this->translateFieldName(_fname, fid, _ftype);
    }
    switch (fid) {
      case 1:
      {
        if (_ftype == apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->fieldA);
          this->__isset.fieldA = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 2:
      {
        if (_ftype == apache::thrift::protocol::T_MAP) {
          this->fieldB = std::map<std::string, bool>();
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, bool>>::read(*iprot, this->fieldB);
          this->__isset.fieldB = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 3:
      {
        if (_ftype == apache::thrift::protocol::T_SET) {
          this->fieldC = std::set<int32_t>();
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, std::set<int32_t>>::read(*iprot, this->fieldC);
          this->__isset.fieldC = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 4:
      {
        if (_ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->fieldD);
          this->__isset.fieldD = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 5:
      {
        if (_ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->fieldE);
          this->__isset.fieldE = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 6:
      {
        if (_ftype == apache::thrift::protocol::T_LIST) {
          this->fieldF = std::vector<std::vector<std::vector<int32_t>>>();
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::list<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>>>, std::vector<std::vector<std::vector<int32_t>>>>::read(*iprot, this->fieldF);
          this->__isset.fieldF = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 7:
      {
        if (_ftype == apache::thrift::protocol::T_MAP) {
          this->fieldG = std::map<std::string, std::map<std::string, std::map<std::string, int32_t>>>();
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>>>, std::map<std::string, std::map<std::string, std::map<std::string, int32_t>>>>::read(*iprot, this->fieldG);
          this->__isset.fieldG = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 8:
      {
        if (_ftype == apache::thrift::protocol::T_LIST) {
          this->fieldH = std::vector<std::set<int32_t>>();
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::set<::apache::thrift::type_class::integral>>, std::vector<std::set<int32_t>>>::read(*iprot, this->fieldH);
          this->__isset.fieldH = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 9:
      {
        if (_ftype == apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->fieldI);
          this->__isset.fieldI = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 10:
      {
        if (_ftype == apache::thrift::protocol::T_MAP) {
          this->fieldJ = std::map<std::string, std::vector<int32_t>>();
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>>, std::map<std::string, std::vector<int32_t>>>::read(*iprot, this->fieldJ);
          this->__isset.fieldJ = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 11:
      {
        if (_ftype == apache::thrift::protocol::T_LIST) {
          this->fieldK = std::vector<std::vector<std::vector<std::vector<int32_t>>>>();
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::list<::apache::thrift::type_class::list<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>>>>, std::vector<std::vector<std::vector<std::vector<int32_t>>>>>::read(*iprot, this->fieldK);
          this->__isset.fieldK = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 12:
      {
        if (_ftype == apache::thrift::protocol::T_SET) {
          this->fieldL = std::set<std::set<std::set<bool>>>();
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::set<::apache::thrift::type_class::set<::apache::thrift::type_class::integral>>>, std::set<std::set<std::set<bool>>>>::read(*iprot, this->fieldL);
          this->__isset.fieldL = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 13:
      {
        if (_ftype == apache::thrift::protocol::T_MAP) {
          this->fieldM = std::map<std::set<std::vector<int32_t>>, std::map<std::vector<std::set<std::string>>, std::string>>();
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::set<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>>, ::apache::thrift::type_class::map<::apache::thrift::type_class::list<::apache::thrift::type_class::set<::apache::thrift::type_class::string>>, ::apache::thrift::type_class::string>>, std::map<std::set<std::vector<int32_t>>, std::map<std::vector<std::set<std::string>>, std::string>>>::read(*iprot, this->fieldM);
          this->__isset.fieldM = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 14:
      {
        if (_ftype == apache::thrift::protocol::T_LIST) {
          this->fieldN = std::vector< ::cpp2::IndirectionA>();
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::detail::pm::IndirectionTag<apache_thrift_indirection_module_IndirectionA, ::apache::thrift::type_class::integral>>, std::vector< ::cpp2::IndirectionA>>::read(*iprot, this->fieldN);
          this->__isset.fieldN = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 15:
      {
        if (_ftype == apache::thrift::protocol::T_LIST) {
          this->fieldO = std::vector< ::cpp2::IndirectionB>();
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::detail::pm::IndirectionTag<apache_thrift_indirection_module_IndirectionB, ::apache::thrift::type_class::floating_point>>, std::vector< ::cpp2::IndirectionB>>::read(*iprot, this->fieldO);
          this->__isset.fieldO = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 16:
      {
        if (_ftype == apache::thrift::protocol::T_LIST) {
          this->fieldP = std::vector< ::cpp2::IndirectionC>();
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::detail::pm::IndirectionTag<apache_thrift_indirection_module_IndirectionC, ::apache::thrift::type_class::integral>>, std::vector< ::cpp2::IndirectionC>>::read(*iprot, this->fieldP);
          this->__isset.fieldP = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 17:
      {
        if (_ftype == apache::thrift::protocol::T_I32) {
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::MyEnumA>::read(*iprot, this->fieldQ);
          this->__isset.fieldQ = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 18:
      {
        if (_ftype == apache::thrift::protocol::T_MAP) {
          std::unique_ptr<std::map<std::string, bool>> ptr = std::make_unique<std::map<std::string, bool>>();
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, bool>>::read(*iprot, *ptr);
          this->fieldR = std::move(ptr);
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 19:
      {
        if (_ftype == apache::thrift::protocol::T_STRUCT) {
          std::unique_ptr< ::cpp2::SmallStruct> ptr = std::make_unique< ::cpp2::SmallStruct>();
          xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::SmallStruct>::read(iprot, ptr.get());
          this->fieldS = std::move(ptr);
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 20:
      {
        if (_ftype == apache::thrift::protocol::T_STRUCT) {
          std::unique_ptr< ::cpp2::SmallStruct> ptr = std::make_unique< ::cpp2::SmallStruct>();
          xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::SmallStruct>::read(iprot, ptr.get());
          this->fieldT = std::move(ptr);
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 21:
      {
        if (_ftype == apache::thrift::protocol::T_STRUCT) {
          std::unique_ptr< ::cpp2::SmallStruct> ptr = std::make_unique< ::cpp2::SmallStruct>();
          xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::SmallStruct>::read(iprot, ptr.get());
          this->fieldU = std::move(ptr);
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 23:
      {
        if (_ftype == apache::thrift::protocol::T_STRUCT) {
          std::unique_ptr< ::cpp2::SmallStruct> ptr = std::make_unique< ::cpp2::SmallStruct>();
          xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::SmallStruct>::read(iprot, ptr.get());
          this->fieldX = std::move(ptr);
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(_ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t containerStruct::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("containerStruct");
  xfer += prot_->serializedFieldSize("fieldA", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->serializedSizeBool(this->fieldA);
  xfer += prot_->serializedFieldSize("fieldB", apache::thrift::protocol::T_MAP, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, bool>>::serializedSize<false>(*prot_, this->fieldB);
  xfer += prot_->serializedFieldSize("fieldC", apache::thrift::protocol::T_SET, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, std::set<int32_t>>::serializedSize<false>(*prot_, this->fieldC);
  xfer += prot_->serializedFieldSize("fieldD", apache::thrift::protocol::T_STRING, 4);
  xfer += prot_->serializedSizeString(this->fieldD);
  xfer += prot_->serializedFieldSize("fieldE", apache::thrift::protocol::T_STRING, 5);
  xfer += prot_->serializedSizeString(this->fieldE);
  xfer += prot_->serializedFieldSize("fieldF", apache::thrift::protocol::T_LIST, 6);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::list<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>>>, std::vector<std::vector<std::vector<int32_t>>>>::serializedSize<false>(*prot_, this->fieldF);
  xfer += prot_->serializedFieldSize("fieldG", apache::thrift::protocol::T_MAP, 7);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>>>, std::map<std::string, std::map<std::string, std::map<std::string, int32_t>>>>::serializedSize<false>(*prot_, this->fieldG);
  xfer += prot_->serializedFieldSize("fieldH", apache::thrift::protocol::T_LIST, 8);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::set<::apache::thrift::type_class::integral>>, std::vector<std::set<int32_t>>>::serializedSize<false>(*prot_, this->fieldH);
  xfer += prot_->serializedFieldSize("fieldI", apache::thrift::protocol::T_BOOL, 9);
  xfer += prot_->serializedSizeBool(this->fieldI);
  xfer += prot_->serializedFieldSize("fieldJ", apache::thrift::protocol::T_MAP, 10);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>>, std::map<std::string, std::vector<int32_t>>>::serializedSize<false>(*prot_, this->fieldJ);
  xfer += prot_->serializedFieldSize("fieldK", apache::thrift::protocol::T_LIST, 11);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::list<::apache::thrift::type_class::list<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>>>>, std::vector<std::vector<std::vector<std::vector<int32_t>>>>>::serializedSize<false>(*prot_, this->fieldK);
  xfer += prot_->serializedFieldSize("fieldL", apache::thrift::protocol::T_SET, 12);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::set<::apache::thrift::type_class::set<::apache::thrift::type_class::integral>>>, std::set<std::set<std::set<bool>>>>::serializedSize<false>(*prot_, this->fieldL);
  xfer += prot_->serializedFieldSize("fieldM", apache::thrift::protocol::T_MAP, 13);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::set<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>>, ::apache::thrift::type_class::map<::apache::thrift::type_class::list<::apache::thrift::type_class::set<::apache::thrift::type_class::string>>, ::apache::thrift::type_class::string>>, std::map<std::set<std::vector<int32_t>>, std::map<std::vector<std::set<std::string>>, std::string>>>::serializedSize<false>(*prot_, this->fieldM);
  xfer += prot_->serializedFieldSize("fieldN", apache::thrift::protocol::T_LIST, 14);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::detail::pm::IndirectionTag<apache_thrift_indirection_module_IndirectionA, ::apache::thrift::type_class::integral>>, std::vector< ::cpp2::IndirectionA>>::serializedSize<false>(*prot_, this->fieldN);
  xfer += prot_->serializedFieldSize("fieldO", apache::thrift::protocol::T_LIST, 15);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::detail::pm::IndirectionTag<apache_thrift_indirection_module_IndirectionB, ::apache::thrift::type_class::floating_point>>, std::vector< ::cpp2::IndirectionB>>::serializedSize<false>(*prot_, this->fieldO);
  xfer += prot_->serializedFieldSize("fieldP", apache::thrift::protocol::T_LIST, 16);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::detail::pm::IndirectionTag<apache_thrift_indirection_module_IndirectionC, ::apache::thrift::type_class::integral>>, std::vector< ::cpp2::IndirectionC>>::serializedSize<false>(*prot_, this->fieldP);
  xfer += prot_->serializedFieldSize("fieldQ", apache::thrift::protocol::T_I32, 17);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::MyEnumA>::serializedSize<false>(*prot_, this->fieldQ);
  xfer += prot_->serializedFieldSize("fieldR", apache::thrift::protocol::T_MAP, 18);
  if (this->fieldR) {
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, bool>>::serializedSize<false>(*prot_, *this->fieldR);
  }
  else {
    xfer += prot_->serializedSizeMapBegin(apache::thrift::protocol::T_STRING, apache::thrift::protocol::T_BOOL, 0);
    xfer += prot_->serializedSizeMapEnd();
  }
  xfer += prot_->serializedFieldSize("fieldS", apache::thrift::protocol::T_STRUCT, 19);
  if (this->fieldS) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::SmallStruct>::serializedSize(prot_, this->fieldS.get());
  }
  else {
    xfer += prot_->serializedStructSize("SmallStruct");
    xfer += prot_->serializedSizeStop();
  }
  xfer += prot_->serializedFieldSize("fieldT", apache::thrift::protocol::T_STRUCT, 20);
  if (this->fieldT) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::SmallStruct>::serializedSize(prot_, this->fieldT.get());
  }
  else {
    xfer += prot_->serializedStructSize("SmallStruct");
    xfer += prot_->serializedSizeStop();
  }
  xfer += prot_->serializedFieldSize("fieldU", apache::thrift::protocol::T_STRUCT, 21);
  if (this->fieldU) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::SmallStruct>::serializedSize(prot_, this->fieldU.get());
  }
  else {
    xfer += prot_->serializedStructSize("SmallStruct");
    xfer += prot_->serializedSizeStop();
  }
  xfer += prot_->serializedFieldSize("fieldX", apache::thrift::protocol::T_STRUCT, 23);
  if (this->fieldX) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::SmallStruct>::serializedSize(prot_, this->fieldX.get());
  }
  else {
    xfer += prot_->serializedStructSize("SmallStruct");
    xfer += prot_->serializedSizeStop();
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t containerStruct::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("containerStruct");
  xfer += prot_->serializedFieldSize("fieldA", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->serializedSizeBool(this->fieldA);
  xfer += prot_->serializedFieldSize("fieldB", apache::thrift::protocol::T_MAP, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, bool>>::serializedSize<false>(*prot_, this->fieldB);
  xfer += prot_->serializedFieldSize("fieldC", apache::thrift::protocol::T_SET, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, std::set<int32_t>>::serializedSize<false>(*prot_, this->fieldC);
  xfer += prot_->serializedFieldSize("fieldD", apache::thrift::protocol::T_STRING, 4);
  xfer += prot_->serializedSizeString(this->fieldD);
  xfer += prot_->serializedFieldSize("fieldE", apache::thrift::protocol::T_STRING, 5);
  xfer += prot_->serializedSizeString(this->fieldE);
  xfer += prot_->serializedFieldSize("fieldF", apache::thrift::protocol::T_LIST, 6);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::list<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>>>, std::vector<std::vector<std::vector<int32_t>>>>::serializedSize<false>(*prot_, this->fieldF);
  xfer += prot_->serializedFieldSize("fieldG", apache::thrift::protocol::T_MAP, 7);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>>>, std::map<std::string, std::map<std::string, std::map<std::string, int32_t>>>>::serializedSize<false>(*prot_, this->fieldG);
  xfer += prot_->serializedFieldSize("fieldH", apache::thrift::protocol::T_LIST, 8);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::set<::apache::thrift::type_class::integral>>, std::vector<std::set<int32_t>>>::serializedSize<false>(*prot_, this->fieldH);
  xfer += prot_->serializedFieldSize("fieldI", apache::thrift::protocol::T_BOOL, 9);
  xfer += prot_->serializedSizeBool(this->fieldI);
  xfer += prot_->serializedFieldSize("fieldJ", apache::thrift::protocol::T_MAP, 10);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>>, std::map<std::string, std::vector<int32_t>>>::serializedSize<false>(*prot_, this->fieldJ);
  xfer += prot_->serializedFieldSize("fieldK", apache::thrift::protocol::T_LIST, 11);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::list<::apache::thrift::type_class::list<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>>>>, std::vector<std::vector<std::vector<std::vector<int32_t>>>>>::serializedSize<false>(*prot_, this->fieldK);
  xfer += prot_->serializedFieldSize("fieldL", apache::thrift::protocol::T_SET, 12);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::set<::apache::thrift::type_class::set<::apache::thrift::type_class::integral>>>, std::set<std::set<std::set<bool>>>>::serializedSize<false>(*prot_, this->fieldL);
  xfer += prot_->serializedFieldSize("fieldM", apache::thrift::protocol::T_MAP, 13);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::set<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>>, ::apache::thrift::type_class::map<::apache::thrift::type_class::list<::apache::thrift::type_class::set<::apache::thrift::type_class::string>>, ::apache::thrift::type_class::string>>, std::map<std::set<std::vector<int32_t>>, std::map<std::vector<std::set<std::string>>, std::string>>>::serializedSize<false>(*prot_, this->fieldM);
  xfer += prot_->serializedFieldSize("fieldN", apache::thrift::protocol::T_LIST, 14);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::detail::pm::IndirectionTag<apache_thrift_indirection_module_IndirectionA, ::apache::thrift::type_class::integral>>, std::vector< ::cpp2::IndirectionA>>::serializedSize<false>(*prot_, this->fieldN);
  xfer += prot_->serializedFieldSize("fieldO", apache::thrift::protocol::T_LIST, 15);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::detail::pm::IndirectionTag<apache_thrift_indirection_module_IndirectionB, ::apache::thrift::type_class::floating_point>>, std::vector< ::cpp2::IndirectionB>>::serializedSize<false>(*prot_, this->fieldO);
  xfer += prot_->serializedFieldSize("fieldP", apache::thrift::protocol::T_LIST, 16);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::detail::pm::IndirectionTag<apache_thrift_indirection_module_IndirectionC, ::apache::thrift::type_class::integral>>, std::vector< ::cpp2::IndirectionC>>::serializedSize<false>(*prot_, this->fieldP);
  xfer += prot_->serializedFieldSize("fieldQ", apache::thrift::protocol::T_I32, 17);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::MyEnumA>::serializedSize<false>(*prot_, this->fieldQ);
  xfer += prot_->serializedFieldSize("fieldR", apache::thrift::protocol::T_MAP, 18);
  if (this->fieldR) {
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, bool>>::serializedSize<false>(*prot_, *this->fieldR);
  }
  else {
    xfer += prot_->serializedSizeMapBegin(apache::thrift::protocol::T_STRING, apache::thrift::protocol::T_BOOL, 0);
    xfer += prot_->serializedSizeMapEnd();
  }
  xfer += prot_->serializedFieldSize("fieldS", apache::thrift::protocol::T_STRUCT, 19);
  if (this->fieldS) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::SmallStruct>::serializedSizeZC(prot_, this->fieldS.get());
  }
  else {
    xfer += prot_->serializedStructSize("SmallStruct");
    xfer += prot_->serializedSizeStop();
  }
  xfer += prot_->serializedFieldSize("fieldT", apache::thrift::protocol::T_STRUCT, 20);
  if (this->fieldT) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::SmallStruct>::serializedSizeZC(prot_, this->fieldT.get());
  }
  else {
    xfer += prot_->serializedStructSize("SmallStruct");
    xfer += prot_->serializedSizeStop();
  }
  xfer += prot_->serializedFieldSize("fieldU", apache::thrift::protocol::T_STRUCT, 21);
  if (this->fieldU) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::SmallStruct>::serializedSizeZC(prot_, this->fieldU.get());
  }
  else {
    xfer += prot_->serializedStructSize("SmallStruct");
    xfer += prot_->serializedSizeStop();
  }
  xfer += prot_->serializedFieldSize("fieldX", apache::thrift::protocol::T_STRUCT, 23);
  if (this->fieldX) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::SmallStruct>::serializedSizeZC(prot_, this->fieldX.get());
  }
  else {
    xfer += prot_->serializedStructSize("SmallStruct");
    xfer += prot_->serializedSizeStop();
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t containerStruct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("containerStruct");
  xfer += prot_->writeFieldBegin("fieldA", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->writeBool(this->fieldA);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldB", apache::thrift::protocol::T_MAP, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, bool>>::write(*prot_, this->fieldB);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldC", apache::thrift::protocol::T_SET, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, std::set<int32_t>>::write(*prot_, this->fieldC);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldD", apache::thrift::protocol::T_STRING, 4);
  xfer += prot_->writeString(this->fieldD);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldE", apache::thrift::protocol::T_STRING, 5);
  xfer += prot_->writeString(this->fieldE);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldF", apache::thrift::protocol::T_LIST, 6);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::list<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>>>, std::vector<std::vector<std::vector<int32_t>>>>::write(*prot_, this->fieldF);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldG", apache::thrift::protocol::T_MAP, 7);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>>>, std::map<std::string, std::map<std::string, std::map<std::string, int32_t>>>>::write(*prot_, this->fieldG);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldH", apache::thrift::protocol::T_LIST, 8);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::set<::apache::thrift::type_class::integral>>, std::vector<std::set<int32_t>>>::write(*prot_, this->fieldH);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldI", apache::thrift::protocol::T_BOOL, 9);
  xfer += prot_->writeBool(this->fieldI);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldJ", apache::thrift::protocol::T_MAP, 10);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>>, std::map<std::string, std::vector<int32_t>>>::write(*prot_, this->fieldJ);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldK", apache::thrift::protocol::T_LIST, 11);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::list<::apache::thrift::type_class::list<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>>>>, std::vector<std::vector<std::vector<std::vector<int32_t>>>>>::write(*prot_, this->fieldK);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldL", apache::thrift::protocol::T_SET, 12);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::set<::apache::thrift::type_class::set<::apache::thrift::type_class::integral>>>, std::set<std::set<std::set<bool>>>>::write(*prot_, this->fieldL);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldM", apache::thrift::protocol::T_MAP, 13);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::set<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>>, ::apache::thrift::type_class::map<::apache::thrift::type_class::list<::apache::thrift::type_class::set<::apache::thrift::type_class::string>>, ::apache::thrift::type_class::string>>, std::map<std::set<std::vector<int32_t>>, std::map<std::vector<std::set<std::string>>, std::string>>>::write(*prot_, this->fieldM);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldN", apache::thrift::protocol::T_LIST, 14);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::detail::pm::IndirectionTag<apache_thrift_indirection_module_IndirectionA, ::apache::thrift::type_class::integral>>, std::vector< ::cpp2::IndirectionA>>::write(*prot_, this->fieldN);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldO", apache::thrift::protocol::T_LIST, 15);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::detail::pm::IndirectionTag<apache_thrift_indirection_module_IndirectionB, ::apache::thrift::type_class::floating_point>>, std::vector< ::cpp2::IndirectionB>>::write(*prot_, this->fieldO);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldP", apache::thrift::protocol::T_LIST, 16);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::detail::pm::IndirectionTag<apache_thrift_indirection_module_IndirectionC, ::apache::thrift::type_class::integral>>, std::vector< ::cpp2::IndirectionC>>::write(*prot_, this->fieldP);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldQ", apache::thrift::protocol::T_I32, 17);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::MyEnumA>::write(*prot_, this->fieldQ);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldR", apache::thrift::protocol::T_MAP, 18);
  if (this->fieldR) {
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, bool>>::write(*prot_, *this->fieldR);
  }
  else {
    xfer += prot_->writeMapBegin(apache::thrift::protocol::T_STRING, apache::thrift::protocol::T_BOOL, 0);
    xfer += prot_->writeMapEnd();
  }
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldS", apache::thrift::protocol::T_STRUCT, 19);
  if (this->fieldS) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::SmallStruct>::write(prot_, this->fieldS.get());
  }
  else {
    xfer += prot_->writeStructBegin("SmallStruct");
    xfer += prot_->writeStructEnd();
    xfer += prot_->writeFieldStop();
  }
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldT", apache::thrift::protocol::T_STRUCT, 20);
  if (this->fieldT) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::SmallStruct>::write(prot_, this->fieldT.get());
  }
  else {
    xfer += prot_->writeStructBegin("SmallStruct");
    xfer += prot_->writeStructEnd();
    xfer += prot_->writeFieldStop();
  }
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldU", apache::thrift::protocol::T_STRUCT, 21);
  if (this->fieldU) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::SmallStruct>::write(prot_, this->fieldU.get());
  }
  else {
    xfer += prot_->writeStructBegin("SmallStruct");
    xfer += prot_->writeStructEnd();
    xfer += prot_->writeFieldStop();
  }
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldX", apache::thrift::protocol::T_STRUCT, 23);
  if (this->fieldX) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::SmallStruct>::write(prot_, this->fieldX.get());
  }
  else {
    xfer += prot_->writeStructBegin("SmallStruct");
    xfer += prot_->writeStructEnd();
    xfer += prot_->writeFieldStop();
  }
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

} // cpp2
