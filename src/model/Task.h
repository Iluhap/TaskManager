//
// Created by Illia Plaksa on 08.11.2021.
//

#ifndef TASKMANAGER_SRC_MODEL_TASK_H_
#define TASKMANAGER_SRC_MODEL_TASK_H_

#include <string>
#include <ctime>

class Task
{
 public:
  enum class Priority
  {
    High,
    Medium,
    Low
  };

 public:
  static Task Create(std::string title,
                     const std::time_t &due_to_date,
                     const Priority &priority);

 public:
  Task() = default;

 private:
  Task(std::string title,
       const std::time_t &due_to_date,
       const Priority &priority);

 private:
  std::string title_;
  Priority priority_;
  std::time_t due_to_date_;

};

#endif //TASKMANAGER_SRC_MODEL_TASK_H_
