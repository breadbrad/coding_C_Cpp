struct stduent {
	int id;
	char grade;
};
struct student sam = {1, 'A'}
/// or
struct stduent sam;
sam.id = 1;
sam.grade = 'A';

// struct pointers 
struct student * sam = malloc (sizeof(struct student));

// accessing memebees of struct pointers : ->
sam->grade = 'A';

// Unions -> access one member at a time. (it stores all data in same chunk of memory)
// Common Use of Unions 
struct student {
	union grade {
		int percentage_grade; // ex) 93% 
		char letter_grade; // 'A'
	};
	int grade_format; // 0 implies int , 1 implies char 
};

struct student brad;
brad.grade.percentage_grade = 95;
brad.grade = 0; 

/* Opaque Types 
 * Type exposed via pointers where defintion can still change  */
/* Typedef 
 * it assigns alternate name to existing type 
 * typedef existing_type alternate_name */
typedef struct person person;
person frank; 
// Opaque types 
typedef struct person * person;
int func(person me) {...}
/*enum deinfes own variable type with a set of int values */
enum time_t { morning, noon, afternoon, night };
enum time_t class = morning;
/////////////////////////
#define NORTH 0
#define EAST 1 
#define SOUTH 2
#define WEST 3 
int direction = SOUTH 
///// same as //////////
enum dir_t {
	NORTH,
	EAST,
	SOUTH,
	WEST
};
typedef enum dir_t dir_t;
dir_t direction = SOUTH; 

/* Singly Linked List */
struct node {
	int data;
	struct node * next;
};
typedef struct node node;
node * head = Null; // Points to beginning of list, set to null initially 

node * add_data(int data) {
	node * new_node = (node *) malloc (sizeof(node));
	new_node->data = data;
	new_node->next = head;
	head = new_node;
	return new_node;
}

node * find_data(int data) {
	node * current;
	for(current = head; current->next!=NULL; current=current->next){
		if(current->data==data) return current;
	}
	return NULL;
}
void rm_data(int data) {
	// Special case if the head has the data 
	if (head->data==data){
		node * tmp = head;
		head=head->next;
		free(tmp);
		return;
	}
	node *prev, *current;
	for(current=head; current->next!=NULL; current=current->next){
		if(current->data==data) {
			prev->next = current->next;
			free(current);
			return;
		}
		prev = current;
	}
}
