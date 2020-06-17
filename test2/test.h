#include <stddef.h>
#include <iostream>

class TaskQueueId {
 public:
  static const size_t kUnmerged;

  explicit TaskQueueId(size_t value) : value_(value) {}

  operator int() const { return value_; }

 private:
  size_t value_ = kUnmerged;
};


static const TaskQueueId _kUnmerged = TaskQueueId(TaskQueueId::kUnmerged);