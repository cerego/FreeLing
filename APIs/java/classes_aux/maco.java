/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.31
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package morfo;

public class maco {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected maco(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(maco obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
// commented to avoid java crashes when deleting maco objects
//    delete();
  }

  public synchronized void delete() {
    if(swigCPtr != 0 && swigCMemOwn) {
      swigCMemOwn = false;
      libmorfo_javaJNI.delete_maco(swigCPtr);
    }
    swigCPtr = 0;
  }

  public maco(maco_options arg0) {
    this(libmorfo_javaJNI.new_maco(maco_options.getCPtr(arg0), arg0), true);
  }

  public ListSentence analyze(ListSentence arg0) {
    return new ListSentence(libmorfo_javaJNI.maco_analyze(swigCPtr, this, ListSentence.getCPtr(arg0), arg0), true);
  }

}
