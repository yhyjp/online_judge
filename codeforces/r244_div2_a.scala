// http://codeforces.com/contest/427/problem/A
object A extends App {
  val sc = new java.util.Scanner(System.in)
  val n = sc.nextInt()
  val ev = Array.fill(n)(sc.nextInt())
  var unrated, hired = 0;
  for (t <- ev) {
    if (t == -1) {
      if (hired == 0) unrated += 1
      else hired -= 1
    }
    else {
      hired += t
    }
  }
  println(unrated);
}
