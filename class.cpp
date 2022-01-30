#include <iostream>
#include <string>


class animal {

	public:
		virtual void move(){
			std::cout << "move" << std::endl;
		}
		virtual void eat (){
			std::cout << "eat" << std::endl;
		}
		virtual void feature (){
			std::cout << "feature" << std::endl;
		}
};

class person : public animal {
	public:
		void move(){
			std::cout << "wolking" << std::endl;
		}
		 void eat(){
			std::cout << "cornivore vegetarian" << std::endl;
		}			
		void feature (){
			std::cout << "feature" << std::endl;
		}
};

class kengouru :public animal {
	public:
		void move(){
			std::cout << "jumping" << std::endl;
		}
		 void eat(){
			std::cout << "vegetarian" << std::endl;
		}
		void feature (){
			std::cout << "bag" << std::endl;
		}	 
};

class engle :public animal {
	public:
		void move(){
			std::cout << "flying" << std::endl;
		}
		 void eat(){
			std::cout << "cornivore" << std::endl;
		}
		void feature (){
			std::cout << "good eyesight" << std::endl;
		}	  	 
};

int main(){

animal* ob;
person p_ob;
engle e_ob;
kengouru k_ob;
ob=&e_ob;
ob->move();
ob->eat();
ob->feature();
}



