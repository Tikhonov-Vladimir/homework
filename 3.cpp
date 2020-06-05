import java.util.ArrayDeque as Stack

class SetOfStacks<T>(private val x : Int, 
	private val y : Int) { 

	private val stacks = MutableList(x) { Stack<T>() }

	fun push(element: T) {
		if (stacks.first().size == y) {
			stacks.add(0, Stack())
		}
		stacks.first().push(element)
	}

	fun pop() {
		stacks.first().pop()
			stacks.removeIf{ it.isEmpty() }
	}

	fun first() = stacks.first().first
}