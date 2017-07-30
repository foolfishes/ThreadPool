#ifndef _TASK_H_
#define _TASK_H_

class Task
{
public:
  typedef void (*FunPtr)();     //no argument void( *funptre)(void *arg)
  explicit Task(const FunPtr& func);
  ~Task();
  void run();
private:
  FunPtr m_fun;

};


#endif