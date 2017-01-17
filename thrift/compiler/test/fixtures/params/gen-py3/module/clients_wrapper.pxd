#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from cpython.ref cimport PyObject
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t
from libcpp cimport bool as cbool
from libcpp.map cimport map as cmap, pair as cpair
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.set cimport set as cset
from libcpp.string cimport string
from libcpp.vector cimport vector

from thrift.lib.py3.thrift_client cimport cTClientBase
from thrift.lib.py3.folly cimport cFollyEventBase, cFollyTry, cFollyUnit

cimport module.types


cdef extern from "src/gen-cpp2/NestedContainers.h" namespace "cpp2":
  cdef cppclass cNestedContainersAsyncClient "cpp2::NestedContainersAsyncClient":
      pass

cdef extern from "<utility>" namespace "std":
  cdef unique_ptr[cNestedContainersClientWrapper] move(unique_ptr[cNestedContainersClientWrapper])

cdef extern from "src/gen-py3/module/clients_wrapper.h" namespace "cpp2":
  cdef cppclass cNestedContainersClientWrapper "cpp2::NestedContainersClientWrapper":
    cNestedContainersClientWrapper(
      shared_ptr[cNestedContainersAsyncClient] async_client,
      shared_ptr[cFollyEventBase] event_base)
    void mapList(
      cmap[int32_t,vector[int32_t]] arg_foo,
      void (*callback) (PyObject*, cFollyTry[cFollyUnit]),
      object py_future)
    void mapSet(
      cmap[int32_t,cset[int32_t]] arg_foo,
      void (*callback) (PyObject*, cFollyTry[cFollyUnit]),
      object py_future)
    void listMap(
      vector[cmap[int32_t,int32_t]] arg_foo,
      void (*callback) (PyObject*, cFollyTry[cFollyUnit]),
      object py_future)
    void listSet(
      vector[cset[int32_t]] arg_foo,
      void (*callback) (PyObject*, cFollyTry[cFollyUnit]),
      object py_future)
    void turtles(
      vector[vector[cmap[int32_t,cmap[int32_t,cset[int32_t]]]]] arg_foo,
      void (*callback) (PyObject*, cFollyTry[cFollyUnit]),
      object py_future)

