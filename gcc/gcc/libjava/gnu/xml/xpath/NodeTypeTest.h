
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_xpath_NodeTypeTest__
#define __gnu_xml_xpath_NodeTypeTest__

#pragma interface

#include <gnu/xml/xpath/Test.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace xpath
      {
          class NodeTypeTest;
          class Test;
      }
    }
  }
  namespace javax
  {
    namespace xml
    {
      namespace namespace
      {
          class QName;
      }
    }
  }
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
          class Node;
      }
    }
  }
}

class gnu::xml::xpath::NodeTypeTest : public ::gnu::xml::xpath::Test
{

public:
  NodeTypeTest(jshort);
  NodeTypeTest(jshort, ::java::lang::String *);
  jshort getNodeType();
  ::java::lang::String * getData();
  jboolean matches(::org::w3c::dom::Node *, jint, jint);
  ::gnu::xml::xpath::Test * clone(::java::lang::Object *);
  jboolean references(::javax::xml::namespace::QName *);
  ::java::lang::String * toString();
public: // actually package-private
  jshort __attribute__((aligned(__alignof__( ::gnu::xml::xpath::Test)))) type;
  ::java::lang::String * data;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_xpath_NodeTypeTest__