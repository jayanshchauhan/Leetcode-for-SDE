/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let currentInit=init;

    return{
        increment:function(){return ++currentInit;},
        decrement:function(){return --currentInit;},
        reset:function(){return currentInit=init;}
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */