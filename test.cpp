#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
char* test_val[1]; test_val[0] = "./c-echo";
EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, FoodString) {
char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "Bacon";
EXPECT_EQ("Bacon", echo(2,test_val));
}

TEST(EchoTest, NameString) {
char* test_val[3]; test_val[0] = "./c-echo";  test_val[1] = "William"; test_val[2] = "Mayuga";
EXPECT_EQ("William Mayuga", echo(3,test_val));
}

TEST(EchoTest, ClassString) {
char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "Spring"; test_val[2] = "2021";  test_val[3] = "CS100";
EXPECT_EQ("Spring 2021 CS100", echo(4,test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
