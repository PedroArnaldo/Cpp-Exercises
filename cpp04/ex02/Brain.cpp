#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor called" << std::endl;
	std::string strArray[100] = {
		"I could use a good nap right about now.",
        "I wonder if my human will give me some treats.",
        "Maybe I should chase that squirrel outside.",
        "I hope I get to play with my favorite toy today.",
        "I wonder if there are any bugs I can catch in the yard.",
        "A good belly rub would be nice right now.",
        "I hope I get to go for a walk today.",
        "Maybe I'll spend the day sunbathing.",
        "I hope I get to cuddle with my human tonight.",
        "I wonder what's in that bag my human just brought home.",
        "I could use a good scratch behind the ears.",
        "I hope I get to play with my doggy friend today.",
        "Maybe I'll practice my hunting skills.",
        "I hope I get to explore the neighborhood on my walk.",
        "I wonder if my human will give me a new toy to play with.",
        "I could use a good stretch right now.",
        "Maybe I'll take a stroll around the yard and mark my territory.",
        "I hope my human remembers to clean my litter box.",
        "I hope I get to cuddle up on the couch with my human tonight.",
        "I wonder if there are any birds I can watch from the window.",
        "Maybe I'll spend some time sharpening my claws on my scratching post.",
        "I hope I get to play with my laser pointer today.",
        "I wonder if there are any mice hiding in the house.",
        "I hope my human remembers to fill my food and water bowls.",
        "I could use a good grooming session right about now.",
        "Maybe I'll curl up in my favorite blanket for a while.",
        "I hope my human remembers to give me my medicine.",
        "I wonder if I can catch that fly buzzing around the room.",
        "I hope I get to play with my catnip toy today.",
        "Maybe I'll take a nap on my human's lap.",
        "I hope I get to go outside and explore today.",
        "I wonder if there are any new scents in the air outside.",
        "Maybe I'll practice my pouncing skills on some toys.",
        "I hope my human remembers to give me fresh water.",
        "I could use a good game of fetch with my human.",
        "Maybe I'll practice my howling or meowing.",
        "I hope I get to chase my tail today.",
        "I wonder if there are any other animals in the yard.",
        "Maybe I'll hide under the bed for a while.",
        "I hope my human remembers to clean my water bowl.",
        "I wonder if there are any lizards I can catch outside.",
        "Maybe I'll spend some time exploring the house.",
        "I hope I get to play with my feather toy today.",
        "I wonder if there are any squirrels outside I can chase.",
        "Maybe I'll take a nap in a sunbeam.",
        "I hope my human remembers to give me my flea medicine.",
        "I wonder if I can catch that toy mouse my human keeps hiding from me.",
        "Maybe I'll spend some time scratching my scratching post.",
        "I hope I get to play with my doggy sibling today.",
        "I wonder if there are any fish swimming in the pond outside.",
        "Maybe I'll spend some time watching birds at the birdfeeder.",
        "I hope my human remembers to give me my heartworm medicine.",
        "I wonder if there are any chipmunks I can chase outside.",
        "Maybe I'll take a nap on a cozy bed.",
        "I hope I get to play with my favorite squeaky toy today.",
        "I wonder if my human will give me a new collar to wear.",
        "Maybe I'll spend some time grooming myself.",
        "I hope I get to go for a car ride today.",
        "I wonder if there are any rabbits I can chase outside.",
        "Maybe I'll take a nap on a warm heating vent.",
        "I hope my human remembers to give me my deworming medicine.",
        "I wonder if there are any geckos I can catch outside.",
        "Maybe I'll spend some time cuddling with my human.",
        "I hope I get to play with my cat tunnel today.",
        "I wonder if there are any voles I can catch outside.",
        "Maybe I'll take a nap in a cozy basket.",
        "I hope my human remembers to give me my tick medicine.",
        "I wonder if there are any spiders I can catch in the house.",
        "Maybe I'll spend some time basking in the sun.",
        "I hope I get to play with my frisbee today.",
        "I wonder if there are any moles I can chase outside.",
        "Maybe I'll take a nap in a comfy chair.",
        "I hope my human remembers to give me my ear medicine.",
        "I wonder if there are any beetles I can catch outside.",
        "Maybe I'll spend some time playing with my puzzle toy.",
        "I hope I get to go for a hike with my human.",
        "I wonder if there are any grasshoppers I can catch outside.",
        "Maybe I'll take a nap in a cozy blanket fort.",
        "I hope my human remembers to give me my dental treats.",
        "I wonder if there are any butterflies I can watch outside.",
        "Maybe I'll spend some time playing with my ball.",
        "I hope I get to go for a swim today.",
        "I wonder if there are any bees buzzing around outside.",
        "Maybe I'll take a nap on a comfy pillow.",
        "I hope my human remembers to give me my joint supplements.",
        "I wonder if there are any crickets I can catch outside.",
        "Maybe I'll spend some time playing with my stuffed animal.",
        "I hope I get to go for a run with my human.",
        "I wonder if there are any ants marching outside.",
        "Maybe I'll take a nap in a warm laundry basket.",
        "I hope my human remembers to give me my probiotics.",
        "I wonder if there are any birds nesting outside.",
        "Maybe I'll spend some time chasing my tail.",
        "I hope I get to go for a bike ride with my human.",
        "I wonder if there are any snails I can catch outside.",
        "Maybe I'll take a nap on a soft cushion.",
        "I hope my human remembers to give me my hairball medicine.",
        "I wonder if there are any worms I can catch outside.",
        "Maybe I'll spend some time lounging on the windowsill.",
        "I hope I get to go for a walk in the park today."
	};
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = strArray[i];
	
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &src)
{
	std::cout << "Brain Operator Assignment called" << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return *this;
}

std::string& Brain::getIdea()
{
	srand (time(NULL));
	int id = rand() % 100 + 1;

	return (this->ideas[id]);
}