#ifndef ERPC_INFINIBAND_H_H
#define ERPC_INFINIBAND_H_H

#include "transport.h"
#include "session.h"

#include <infiniband/verbs.h>
#include <string.h>
#include <stdio.h>

namespace ERpc {
class InfinibandTransport: public Transport {
public:
  InfinibandTransport();
  ~InfinibandTransport();

  virtual void send_message(Session *session) {
  }

  virtual void poll_completions() {

  }
};
}

#endif //ERPC_INFINIBAND_H_H