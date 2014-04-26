object A extends App {
  val n = readInt()
  val in = Array.fill(n)(readLine())
  val ls = for (i <- 1 to 12; j <- 1 to 12; if (i*j==12)) yield (j, i)
  for (s <- in) {
    var q = List[(Int,Int)]()
    for (c <- ls) {
      var yes = false;
      for (i <- 0 until c._2) {
        val t = for (j <- 0 until c._1) yield s(i + j*c._2);
        if (!yes) yes = !t.contains('O')
      }
      if (yes) q ::= c
    }
    
    print(q.length)
    for (t <- q) {
      print(" " + t._1 + "x" + t._2)
    }
    println();
  }
}
