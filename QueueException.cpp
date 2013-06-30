/*
 * =====================================================================================
 *
 *       Filename:  QueueException.cpp
 *
 *    
 *
 *        Version:  1.0
 *        Created:  06/30/2013 11:27:39 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyler Morgan
 *   Organization:  
 *
 * =====================================================================================
 */

#include "QueueExceptions.h"

inline const char* MyException::GetDescription() const throw()
{
  return "an exception was raised!";
}
inline const char* QueueEmpty::GetDescription() const throw()
{
  return "Queue is empty";
}

inline const char* QueueFull::GetDescription() const throw()
{
  return "Queue is full";
}

inline const char* MissingElement::GetDescription() const throw()
{
  return "Could not find element";
}


