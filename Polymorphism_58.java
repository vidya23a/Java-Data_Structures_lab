abstract class Shape{
	abstract void noOfSides();
	
	}
class Triangle extends Shape{
	void noOfSides()
	{
		System.out.println("3 Sides");
	}
}

class Rectangle extends Shape{
	void noOfSides()
	{
		System.out.println("4 Sides");
	}
}
class Hexagon extends Shape{
void noOfSides()
	{
		System.out.println("6 Sides");
	}
}

class Polymorphism_58{
	public static void main(String args[]){
		Triangle t =new Triangle();
		Rectangle r =new Rectangle();
		Hexagon h=new Hexagon();
		t.noOfSides();
		r.noOfSides();
		h.noOfSides();
	}
}
