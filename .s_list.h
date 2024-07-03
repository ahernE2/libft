typedef int (*func_ptr)(int);

typedef struct {
    func_ptr func;
    const char *name;
} FuncMapping;

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
