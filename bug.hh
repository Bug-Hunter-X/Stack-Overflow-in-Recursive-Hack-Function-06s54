function foo(x: int): int {
  if (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function bar(): void {
  echo foo(5);
}

This code will produce a stack overflow error when called with large input values. This is due to the recursive nature of the foo function. Each time the foo function calls itself, a new frame is pushed onto the call stack.  If the function is called repeatedly with a large value of x, eventually the call stack will overflow. The Stack Overflow occurs because the recursive call exceeds the maximum allowed depth of the call stack. 