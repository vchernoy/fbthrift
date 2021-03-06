/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "module_types.h"

#include <algorithm>
#include <string.h>



const int _kMyEnumValues[] = {
  MyValue1,
  MyValue2
};

const char* const _kMyEnumNames[] = {
  "MyValue1",
  "MyValue2"
};

const std::map<int, const char*> _MyEnum_VALUES_TO_NAMES(apache::thrift::TEnumIterator<int>(2, _kMyEnumValues, _kMyEnumNames), apache::thrift::TEnumIterator<int>(-1, NULL, NULL));

const std::map<const char*, int, apache::thrift::ltstr> _MyEnum_NAMES_TO_VALUES(apache::thrift::TEnumInverseIterator<int>(2, _kMyEnumValues, _kMyEnumNames), apache::thrift::TEnumInverseIterator<int>(-1, NULL, NULL));


namespace apache { namespace thrift {
template<>
const char* TEnumTraitsBase< ::MyEnum>::findName( ::MyEnum value) {
return findName( ::_MyEnum_VALUES_TO_NAMES, value);
} 

template<>
bool TEnumTraitsBase< ::MyEnum>::findValue(const char* name,  ::MyEnum* out) {
return findValue( ::_MyEnum_NAMES_TO_VALUES, name, out);
} 
}} // apache::thrift 


const uint64_t MyStruct::_reflection_id;
void MyStruct::_reflection_register(::apache::thrift::reflection::Schema& schema) {
   ::module_reflection_::reflectionInitializer_7958971832214294220(schema);
}

bool MyStruct::operator == (const MyStruct & rhs) const {
  if (!(this->MyIntField == rhs.MyIntField))
    return false;
  if (!(this->MyStringField == rhs.MyStringField))
    return false;
  return true;
}

void MyStruct::__clear() {
  MyIntField = 0;
  MyStringField = "";
  __isset.__clear();
}
void swap(MyStruct &a, MyStruct &b) {
  using ::std::swap;
  (void)a;
  (void)b;
  swap(a.MyIntField, b.MyIntField);
  swap(a.MyStringField, b.MyStringField);
  swap(a.__isset, b.__isset);
}

void merge(const MyStruct& from, MyStruct& to) {
  using apache::thrift::merge;
  if (from.__isset.MyIntField) {
    merge(from.MyIntField, to.MyIntField);
    to.__isset.MyIntField = true;
  }
  if (from.__isset.MyStringField) {
    merge(from.MyStringField, to.MyStringField);
    to.__isset.MyStringField = true;
  }
}

void merge(MyStruct&& from, MyStruct& to) {
  using apache::thrift::merge;
  if (from.__isset.MyIntField) {
    merge(std::move(from.MyIntField), to.MyIntField);
    to.__isset.MyIntField = true;
  }
  if (from.__isset.MyStringField) {
    merge(std::move(from.MyStringField), to.MyStringField);
    to.__isset.MyStringField = true;
  }
}


