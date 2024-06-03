#include "HapticMacos.hpp"
#include <chrono>
#include <thread>

int main()
{
  FeedbackPerformer performer;
  HAPT_DEBUG_LOG_INFO("Testing delays: this loop should NOT work!");
  for (int i = 0; i < 10; i++) {
    performer.Perform(FeedbackType::Generic);
  }
  HAPT_DEBUG_LOG_INFO("Testing delays: this loop should work!");
  for (int i = 0; i < 10; i++) {
    performer.WaitAndPerform(FeedbackType::Generic);
  }
  return 0;
}
