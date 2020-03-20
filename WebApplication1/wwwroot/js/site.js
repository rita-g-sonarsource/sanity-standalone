function foo(a) {  // 3516 Noncompliant
    let b = 12;
    if (a) {
        return b;
    }
    return b;
}

function f() {
    i = 1;         // 2703 Noncompliant; i is global

    for (j = 0; j < array.length; j++) {  // 2703 Noncompliant; j is global now too
        // ...
    }
}