object A extends App {
  val sc = new java.util.Scanner(System.in)
  val n, x = sc.nextInt()
  val in = Array.fill(n)(sc.nextInt())
  val sum = in.sum
  println((sum/x).abs + (if (sum%x==0) 0 else 1))
}
