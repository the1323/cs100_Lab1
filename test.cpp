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

TEST(EchoTest,abc){
char* test_val[2]; test_val[0] = "./c-ehco"; test_val[1] = "abc";
EXPECT_EQ("abc",echo(2,test_val));

}
TEST(EchoTest,integer) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "123"; test_val[2] = "098";
    EXPECT_EQ("123 098", echo(3,test_val));
}
TEST(EchoTest, nlANDbell) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "\n"; test_val[2] = "\a";
    EXPECT_EQ("\n \a", echo(3,test_val));
}






int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

