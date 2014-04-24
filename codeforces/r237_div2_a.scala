object A extends App {
  val n = readInt();
  val in = Array.fill(n)(readLine())
  var sa = Set[Char]()
  var sb = Set[Char]()
  for (i <- 0 until n; j <- 0 until n)
    if (i==j || n-i-1==j || i==n-j-1 || n-j-1==n-i-1) sa += in(i)(j);
    else sb += in(i)(j)

  if (sa.size == 1 && sb.size == 1 && sa.head != sb.head)
    println("YES");
  else
    println("NO")
}

