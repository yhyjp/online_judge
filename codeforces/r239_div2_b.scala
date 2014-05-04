// http://codeforces.com/contest/408/problem/B
object B extends App {
  val a, b = readLine();
  val ct = (s: String, c: Char) => { s.count(_ == c) }
  val ctm = (l: String) => { l map (ct(l, _: Char)) }
  val am = a.zip(ctm(a)).toMap
  val bm = b.zip(ctm(b)).toMap
  var impossible = false;
  var sum = 0;
  for ((k, n) <- bm)
  {
    if (am.contains(k) == false) {
      impossible = true;
    }
    else {
      sum += n min am(k)
    }
  }
  if (impossible) sum = -1;
  println(sum);
}
