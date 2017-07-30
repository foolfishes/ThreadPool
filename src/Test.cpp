#include <stdio.h>
#include <pthread.h>
#include "ThreadPool.h"


void task1(){
  sleep(1);
  printf("Thread #%u working on task1\n", (int)pthread_self());
}


void task2(){
  sleep(1);
  printf("Thread #%u working on task2\n", (int)pthread_self());
}


int main(){
  
  printf("Making threadpool with 4 threads\n");
  ThreadPool pool(4);

  for (int i=0; i<5; i++){
    pool.addTask(Task(task1));
    pool.addTask(Task(task2));
  };

  sleep(20);

  for (int i=0; i<5; i++){
    pool.addTask(Task(task1));
    pool.addTask(Task(task2));
  };

  sleep(20);

  for (int i=0; i<5; i++){
    pool.addTask(Task(task1));
    pool.addTask(Task(task2));
  };

    sleep(20);

  for (int i=0; i<5; i++){
    pool.addTask(Task(task1));
    pool.addTask(Task(task2));
  };

    sleep(20);

  for (int i=0; i<5; i++){
    pool.addTask(Task(task1));
    pool.addTask(Task(task2));
  };

  sleep(100);
  printf("Killing threadpool\n");
  pool.destroy();
  
  return 0;
}
