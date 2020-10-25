<?php

$a=array(5,4,3,2,1);
echo "The array is "."<br/>";
foreach($a as $b)
{
  echo $b." ";
}
echo "<br/>";

// echo count($a);
echo "The sorted list"."<br/>";
for($i=1;$i<count($a);$i++)
{
  for($j=0;$j<count($a)-$i;$j++)
  {
    while($a[$j]>$a[$j+1])
    {
      $temp=$a[$j];
      $a[$j]=$a[$j+1];
      $a[$j+1]=$temp;


    }
  }
  }
  for($i=0;$i<count($a);$i++)
  {
    echo $a[$i]." ";
  }



?>
