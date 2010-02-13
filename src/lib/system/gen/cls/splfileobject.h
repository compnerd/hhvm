/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __GENERATED_cls_splfileobject_h__
#define __GENERATED_cls_splfileobject_h__

#include <cls/splfileinfo.h>
#include <cls/recursiveiterator.h>
#include <cls/traversable.h>
#include <cls/iterator.h>
#include <cls/seekableiterator.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/splfile.php line 120 */
class c_splfileobject : virtual public c_splfileinfo, virtual public c_recursiveiterator, virtual public c_traversable, virtual public c_iterator, virtual public c_seekableiterator {
  BEGIN_CLASS_MAP(splfileobject)
    PARENT_CLASS(splfileinfo)
    PARENT_CLASS(traversable)
    PARENT_CLASS(iterator)
    PARENT_CLASS(recursiveiterator)
    PARENT_CLASS(traversable)
    PARENT_CLASS(traversable)
    PARENT_CLASS(iterator)
    PARENT_CLASS(seekableiterator)
  END_CLASS_MAP(splfileobject)
  DECLARE_CLASS(splfileobject, SplFileObject, splfileinfo)
  DECLARE_INVOKES_FROM_EVAL
  void init();
  public: void t___construct(Variant v_filename, Variant v_open_mode = "r", Variant v_use_include_path = false, Variant v_context = null);
  public: ObjectData *create(Variant v_filename, Variant v_open_mode = "r", Variant v_use_include_path = false, Variant v_context = null);
  public: ObjectData *dynCreate(CArrRef params, bool init = true);
  public: void dynConstruct(CArrRef params);
  public: Variant t_current();
  public: bool t_eof();
  public: bool t_fflush();
  public: String t_fgetc();
  public: Variant t_fgetcsv(CStrRef v_delimiter = ",", CStrRef v_enclosure = "\"", CStrRef v_escape = "\\");
  public: String t_fgets();
  public: String t_fgetss(CVarRef v_allowable_tags);
  public: bool t_flock(CVarRef v_operation, Variant v_wouldblock);
  public: int64 t_fpassthru();
  public: Variant t_fscanf(CVarRef v_format);
  public: int64 t_fseek(CVarRef v_offset, CVarRef v_whence);
  public: Variant t_fstat();
  public: int64 t_ftell();
  public: bool t_ftruncate(CVarRef v_size);
  public: int64 t_fwrite(CVarRef v_str, CVarRef v_length);
  public: Variant t_getchildren();
  public: Variant t_getcsvcontrol();
  public: int64 t_getflags();
  public: int64 t_getmaxlinelen();
  public: bool t_haschildren();
  public: int64 t_key();
  public: Variant t_next();
  public: Variant t_rewind();
  public: Variant t_seek(CVarRef v_line_pos);
  public: Variant t_setcsvcontrol(CStrRef v_delimiter = ",", CStrRef v_enclosure = "\"", CStrRef v_escape = "\\");
  public: Variant t_setflags(CVarRef v_flags);
  public: Variant t_setmaxlinelen(CVarRef v_max_len);
  public: bool t_valid();
};

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_splfileobject_h__
