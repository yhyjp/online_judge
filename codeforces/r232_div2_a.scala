object A extends App {
  val sc = new java.util.Scanner(System.in)
  val n = sc.nextInt()
  val in = Array.fill(n)((sc.nextInt(), sc.nextInt()))
  var t = Array.fill(100)(false)
  for (r <- in.tail) {
    for (i <- r._1 until r._2) {
      t(i) = true;
    }
  }
  println(t.slice(in.head._1, in.head._2).count(_ == false));
}
