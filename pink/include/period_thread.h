// Copyright (c) 2015-present, Qihoo, Inc.  All rights reserved.
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree. An additional grant
// of patent rights can be found in the PATENTS file in the same directory.

#ifndef INCLUDE_PERIOD_THREAD_H_
#define INCLUDE_PERIOD_THREAD_H_

#include <sys/time.h>

#include "pink/include/pink_thread.h"

namespace pink {

class PeriodThread : public Thread {
 public:
  explicit PeriodThread(struct timeval period = (struct timeval){1, 0});
  virtual void *ThreadMain();
  virtual void PeriodMain() = 0;

 private:
  struct timeval period_;
};

}  // namespace pink

#endif  // INCLUDE_PERIOD_THREAD_H_
