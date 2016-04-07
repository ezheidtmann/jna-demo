import com.sun.jna.Library;
import com.sun.jna.Native;
import com.sun.jna.PointerType;

import java.util.ArrayList;

public class MyDemo {
  public static class StuffPointer extends PointerType {}

  public static native StuffPointer createThing(int size);
  public static native void updateThing(StuffPointer s, int N, float F, float[] values);
  public static native void printThing(StuffPointer s);

  static {
    Native.register("mystuff");
  }

  public static void main(String[] args) {
    ArrayList<Float> a = new ArrayList<Float>();
    a.add(1.f);
    a.add(2.f);
    a.add(4.f);

    StuffPointer s = createThing(a.size());
    printThing(s);

    // We have to manually convert to a primitive array, thanks Java.
    float[] fa = new float[a.size()];
    int i = 0;
    for (Float f : a) {
      fa[i++] = (f == null ? Float.NaN : f);
    }

    updateThing(s, 10, 0.4f, fa);
    printThing(s);
  }
}
