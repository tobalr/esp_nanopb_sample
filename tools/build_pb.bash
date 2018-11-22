#!/bin/bash

## DEPENDENCIES
# protoc
# python-protobuf
PB_NAME="sample"
SRC_DIR="../src" 
OUT_DIR="../out" 
LIB_DIR="../lib/nanopb" 
protoc --proto_path="$SRC_DIR" -o "$OUT_DIR/$PB_NAME.pb" "$SRC_DIR/$PB_NAME.proto"
../nanopb/generator/nanopb_generator.py "$OUT_DIR/$PB_NAME.pb"

mkdir -p $LIB_DIR
mv $OUT_DIR/$PB_NAME.pb.* $LIB_DIR/