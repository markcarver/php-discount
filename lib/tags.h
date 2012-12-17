/* block-level tags for passing html blocks through the blender
 */
#ifndef _TAGS_D
#define _TAGS_D

struct kw {
    char *id;
    int  size;
    int  selfclose;
} ;


struct kw* mkd_search_tags(char *, int);
void mkd_deallocate_tags();
/* on merge: these were deleted */
/*void mkd_sort_tags();*/
/*void mkd_define_tag(char *, int);*/

#endif