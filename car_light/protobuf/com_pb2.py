# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: protobuf/com.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='protobuf/com.proto',
  package='demo',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=b'\n\x12protobuf/com.proto\x12\x04\x64\x65mo\"\x13\n\x04\x63omu\x12\x0b\n\x03mmm\x18\x01 \x01(\tb\x06proto3'
)




_COMU = _descriptor.Descriptor(
  name='comu',
  full_name='demo.comu',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='mmm', full_name='demo.comu.mmm', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=28,
  serialized_end=47,
)

DESCRIPTOR.message_types_by_name['comu'] = _COMU
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

comu = _reflection.GeneratedProtocolMessageType('comu', (_message.Message,), {
  'DESCRIPTOR' : _COMU,
  '__module__' : 'protobuf.com_pb2'
  # @@protoc_insertion_point(class_scope:demo.comu)
  })
_sym_db.RegisterMessage(comu)


# @@protoc_insertion_point(module_scope)
