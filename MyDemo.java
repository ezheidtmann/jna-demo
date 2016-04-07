import com.sun.jna.Library;
import com.sun.jna.Native;
import com.sun.jna.PointerType;

public class MyDemo {
  public static class StuffPointer extends PointerType {}

  public static native StuffPointer createThing();
  public static native void updateThing(StuffPointer s, int N, float F);
  public static native void printThing(StuffPointer s);

  static {
    Native.register("mystuff");
  }

  public static void main(String[] args) {
    StuffPointer s = createThing();
    printThing(s);
    updateThing(s, 10, 0.4f);
    printThing(s);
  }
}
