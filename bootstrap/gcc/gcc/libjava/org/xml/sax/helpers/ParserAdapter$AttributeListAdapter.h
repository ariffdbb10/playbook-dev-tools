
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_xml_sax_helpers_ParserAdapter$AttributeListAdapter__
#define __org_xml_sax_helpers_ParserAdapter$AttributeListAdapter__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace xml
    {
      namespace sax
      {
          class AttributeList;
        namespace helpers
        {
            class ParserAdapter;
            class ParserAdapter$AttributeListAdapter;
        }
      }
    }
  }
}

class org::xml::sax::helpers::ParserAdapter$AttributeListAdapter : public ::java::lang::Object
{

public: // actually package-private
  ParserAdapter$AttributeListAdapter(::org::xml::sax::helpers::ParserAdapter *);
  void setAttributeList(::org::xml::sax::AttributeList *);
public:
  jint getLength();
  ::java::lang::String * getURI(jint);
  ::java::lang::String * getLocalName(jint);
  ::java::lang::String * getQName(jint);
  ::java::lang::String * getType(jint);
  ::java::lang::String * getValue(jint);
  jint getIndex(::java::lang::String *, ::java::lang::String *);
  jint getIndex(::java::lang::String *);
  ::java::lang::String * getType(::java::lang::String *, ::java::lang::String *);
  ::java::lang::String * getType(::java::lang::String *);
  ::java::lang::String * getValue(::java::lang::String *, ::java::lang::String *);
  ::java::lang::String * getValue(::java::lang::String *);
private:
  ::org::xml::sax::AttributeList * __attribute__((aligned(__alignof__( ::java::lang::Object)))) qAtts;
public: // actually package-private
  ::org::xml::sax::helpers::ParserAdapter * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __org_xml_sax_helpers_ParserAdapter$AttributeListAdapter__
