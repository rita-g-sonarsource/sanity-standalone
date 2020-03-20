'use strict';

var arr = [1, 2, 3];

var merged = arr.reduce(function (a, b) {
    a.concat(b);
}); // 3796 Noncompliant: No return statement


function foo(a) {  // 3516 Noncompliant
    let b = 12;
    if (a) {
        return b;
    }
    return b;
}

console.log('Hello world');
