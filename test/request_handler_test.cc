#include "gtest/gtest.h"
#include "../src/request_handler.hpp"
#include "../src/static_handler.hpp"
#include <string>

namespace http {
  namespace server {

TEST(CreateByName, CreateNonExistentName)
{
  EXPECT_EQ(RequestHandler::CreateByName("NonExistentHandler"), nullptr);
}

TEST(CreateByName, CreateExistingName)
{
  EXPECT_NO_THROW(RequestHandler::CreateByName("StaticHandler"));
}



  } // namespace server
} // namespace http
