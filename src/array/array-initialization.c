// Arrays in global or static scope are initialized with zeros implicitly. 
int array_in_global_scope[5];
static int array_in_static_scope[5];
// If an initialization list is provided, the size can be inferred.
int array_with_size_unspecified[] = {1, 2, 3, 4, 5};

int main(void) {
	// Locally defined arrays should be initialized explictly.
	int array_in_local_scope[5] = {1, 2, 3, 4, 5};
	// Uninitialized arrays's initial content can't be determined.
	int uninitialized_array[5];
	// The following array has only first two entries initialized.
	int partial_initialized_array[5] = {1, 2};
}
