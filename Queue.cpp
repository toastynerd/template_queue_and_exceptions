//Tyler Morgan
//UW cpp online course qtr 2
//assignment 4
//Queue.cpp
#include <iostream>
#include "QueueExceptions.h"

template<typename T>
class Queue
{
public:
  Queue(int size)
  :my_current_size(0),
  my_max_size(size)
  {
    my_queue = new T[size];
  }

  ~Queue()
  {
    delete[] my_queue;
  }

  void push(T input)
  {
    if(my_current_size == my_max_size)
    {
      throw new QueueFull;
    }

    my_queue[my_current_size] = input;
    my_current_size++;
  }

  T pop()
  {
    if(my_current_size == 0)
    {
      throw new QueueEmpty;
    }
    T temp_value = my_queue[0];
    for(int x =0; x < my_current_size; x++)
    {
      my_queue[x] = my_queue[x+1];
    }
    my_current_size--;
    return temp_value;
  }

  bool isEmpty()
  {
    if( my_current_size == 0 )
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  T at(int location)
  {
    if(location > my_current_size || location < 0)
    {
      throw new MissingElement;
    }
    return my_queue[location];
  }

  int size()
  {
    return my_current_size;
  }

  template <typename T2>
  Queue<T>& operator =(Queue<T2>& input_queue)
  {
    if(input_queue.size() <= my_max_size)
    {
      for(int x =0;x<input_queue.size();x++)
      {
        my_queue[x] = input_queue.at(x);
      }
    }
  }

private:
  int my_current_size;
  int my_max_size;
  T* my_queue;
};
