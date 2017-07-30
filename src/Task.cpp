#include "Task.h"

Task::Task(const FunPtr& func):m_fun(func){}

Task::~Task(){}

void Task::run()
{
  m_fun();
}