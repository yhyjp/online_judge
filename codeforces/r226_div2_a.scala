// http://codeforces.com/contest/385/problem/A
object A extends App {
  val sc = new java.util.Scanner(System.in)
  val n, c = sc.nextInt()
  val x = Array.fill(n)(sc.nextInt())
  var ans = 0
  for (i <- 0 until n-1) {
    ans = ans.max(x(i)-x(i+1)-c)
  }
  println(ans)
}
