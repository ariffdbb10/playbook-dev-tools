
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_gnuRequest$2__
#define __gnu_CORBA_gnuRequest$2__

#pragma interface

#include <java/lang/Thread.h>
extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
        class gnuRequest;
        class gnuRequest$2;
    }
  }
}

class gnu::CORBA::gnuRequest$2 : public ::java::lang::Thread
{

public: // actually package-private
  gnuRequest$2(::gnu::CORBA::gnuRequest *, ::gnu::CORBA::gnuRequest *);
public:
  void run();
public: // actually package-private
  ::gnu::CORBA::gnuRequest * __attribute__((aligned(__alignof__( ::java::lang::Thread)))) this$0;
private:
  ::gnu::CORBA::gnuRequest * val$cloned;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_gnuRequest$2__
