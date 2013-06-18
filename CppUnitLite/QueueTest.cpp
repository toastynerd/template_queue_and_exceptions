#include "TestHarness.h"
#include "../Queue.cpp"

// include the header file for the class you are testing.

// each test function should be small and test a single capability

// replace testName with the name of the particular test. Replace ClassName with
// the name of the class being tested
TEST(empty_queue, Queue)
{
  Queue<int> queue1(10);
  CHECK_EQUAL(true, queue1.isEmpty());
}

TEST(push_pop, Queue)
{
  Queue<int> queue2(10);
  queue2.push(10);
  queue2.push(15);
  queue2.push(20);
  queue2.push(25);

  CHECK_EQUAL(10, queue2.pop());
  CHECK_EQUAL(15, queue2.pop());
}

TEST(size, Queue)
{
  Queue<int> queue3(10);
  queue3.push(1);
  queue3.push(2);
  queue3.push(3);

  CHECK_EQUAL(3, queue3.size());
}

TEST(assignment, Queue)
{
  Queue<int> queue4(10);
  Queue<int> queue5(10);
  Queue<double> queue6(10);

  queue4.push(5);
  queue4.push(6);
  queue4.push(7);

  queue5 = queue4;

  CHECK_EQUAL(5, queue5.pop());

  queue6 = queue4;
  CHECK_EQUAL(5, queue6.pop());

}
