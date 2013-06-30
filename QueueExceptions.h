//Tyler Morgan
//UW c++ online certification course
//assignment 4
//QueueExceptions.h
//

class MyException
{
public:
  MyException(){};

  virtual const char* GetDescription() const throw();
};

class QueueEmpty: public MyException
{
public:
  QueueEmpty(){};
  const char* GetDescription() const throw();

};

class QueueFull: public MyException
{
public:
  QueueFull() {};

  const char* GetDescription() const throw();

};

class MissingElement: public MyException
{
public:
  MissingElement() {};

  const char* GetDescription() const throw();
};


