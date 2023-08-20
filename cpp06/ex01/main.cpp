#include "Serializer.hpp"

int main(void)
{
	Data data;
	data.value = 42;
	data.next = NULL;
	Data *ptr = &data;

	uintptr_t sl = Serializer::serialize(ptr);
		
	std::cout << "Original Pointer value: " << ptr << std::endl;
	std::cout << "Serialize value: " << sl << std::endl;
	
	Data *res = Serializer::deserialize(sl);
	std::cout << "Deserialize value: " << res << std::endl;
	return (0);
}
