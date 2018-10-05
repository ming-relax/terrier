//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// transaction_runtime_proxy.h
//
// Identification: src/include/execution/proxy/transaction_runtime_proxy.h
//
// Copyright (c) 2015-2017, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//

#pragma once

#include "execution/proxy/proxy.h"

namespace terrier::execution {

PROXY(TransactionRuntime) {
  DECLARE_METHOD(PerformVectorizedRead);
  DECLARE_METHOD(PerformVisibilityCheck);
};

}  // namespace terrier::execution