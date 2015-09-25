<?php
/**
 * @file
 * craving_boston_site.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function craving_boston_site_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-craving-boston_about:about
  $menu_links['menu-craving-boston_about:about'] = array(
    'menu_name' => 'menu-craving-boston',
    'link_path' => 'about',
    'router_path' => 'about',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-craving-boston_about:about',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-craving-boston_contact-us:contact
  $menu_links['menu-craving-boston_contact-us:contact'] = array(
    'menu_name' => 'menu-craving-boston',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => 'Get in touch',
      ),
      'identifier' => 'menu-craving-boston_contact-us:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-craving-boston_faqs:faqs
  $menu_links['menu-craving-boston_faqs:faqs'] = array(
    'menu_name' => 'menu-craving-boston',
    'link_path' => 'faqs',
    'router_path' => 'faqs',
    'link_title' => 'FAQs',
    'options' => array(
      'attributes' => array(
        'title' => 'Just the faqs, ma\'am',
      ),
      'identifier' => 'menu-craving-boston_faqs:faqs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-craving-boston_rss-feed:rss.xml
  $menu_links['menu-craving-boston_rss-feed:rss.xml'] = array(
    'menu_name' => 'menu-craving-boston',
    'link_path' => 'rss.xml',
    'router_path' => 'rss.xml',
    'link_title' => 'RSS Feed',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-craving-boston_rss-feed:rss.xml',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-topics_chew-on-this:food
  $menu_links['menu-topics_chew-on-this:food'] = array(
    'menu_name' => 'menu-topics',
    'link_path' => 'food',
    'router_path' => 'food',
    'link_title' => 'Chew On This',
    'options' => array(
      'attributes' => array(
        'title' => 'Editorial articles about food',
      ),
      'identifier' => 'menu-topics_chew-on-this:food',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-topics_home:<front>
  $menu_links['menu-topics_home:<front>'] = array(
    'menu_name' => 'menu-topics',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-topics_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-topics_neighborhood-nosh:neighborhoods
  $menu_links['menu-topics_neighborhood-nosh:neighborhoods'] = array(
    'menu_name' => 'menu-topics',
    'link_path' => 'neighborhoods',
    'router_path' => 'neighborhoods',
    'link_title' => 'Neighborhood Nosh',
    'options' => array(
      'attributes' => array(
        'title' => 'Food stories from the neighborhoods of Metro Boston',
      ),
      'identifier' => 'menu-topics_neighborhood-nosh:neighborhoods',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-topics_recipes:recipes
  $menu_links['menu-topics_recipes:recipes'] = array(
    'menu_name' => 'menu-topics',
    'link_path' => 'recipes',
    'router_path' => 'recipes',
    'link_title' => 'Recipes',
    'options' => array(
      'attributes' => array(
        'title' => 'Pretty much self-explanatory',
      ),
      'identifier' => 'menu-topics_recipes:recipes',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-topics_reviews:reviews
  $menu_links['menu-topics_reviews:reviews'] = array(
    'menu_name' => 'menu-topics',
    'link_path' => 'reviews',
    'router_path' => 'reviews',
    'link_title' => 'Reviews',
    'options' => array(
      'attributes' => array(
        'title' => 'Reviews of restaurants, food purveyors, and other food experiences',
      ),
      'identifier' => 'menu-topics_reviews:reviews',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-topics_table-talk:table-talk
  $menu_links['menu-topics_table-talk:table-talk'] = array(
    'menu_name' => 'menu-topics',
    'link_path' => 'table-talk',
    'router_path' => 'table-talk',
    'link_title' => 'Table Talk',
    'options' => array(
      'attributes' => array(
        'title' => 'Editorials and weekly wrap-ups',
      ),
      'identifier' => 'menu-topics_table-talk:table-talk',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-topics_thats-the-spirit:drink
  $menu_links['menu-topics_thats-the-spirit:drink'] = array(
    'menu_name' => 'menu-topics',
    'link_path' => 'drink',
    'router_path' => 'drink',
    'link_title' => 'That\'s the Spirit',
    'options' => array(
      'attributes' => array(
        'title' => 'Articles about drink',
      ),
      'identifier' => 'menu-topics_thats-the-spirit:drink',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: wgbh-links-menu_about-wgbh:http://www.wgbh.org/about
  $menu_links['wgbh-links-menu_about-wgbh:http://www.wgbh.org/about'] = array(
    'menu_name' => 'wgbh-links-menu',
    'link_path' => 'http://www.wgbh.org/about',
    'router_path' => '',
    'link_title' => 'About WGBH',
    'options' => array(
      'attributes' => array(
        'title' => 'Learn more about WGBH',
      ),
      'identifier' => 'wgbh-links-menu_about-wgbh:http://www.wgbh.org/about',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: wgbh-links-menu_contact-wgbh:http://www.wgbh.org/about/contact.cfm
  $menu_links['wgbh-links-menu_contact-wgbh:http://www.wgbh.org/about/contact.cfm'] = array(
    'menu_name' => 'wgbh-links-menu',
    'link_path' => 'http://www.wgbh.org/about/contact.cfm',
    'router_path' => '',
    'link_title' => 'Contact WGBH',
    'options' => array(
      'attributes' => array(
        'title' => 'Contact the larger WGBH organization',
      ),
      'identifier' => 'wgbh-links-menu_contact-wgbh:http://www.wgbh.org/about/contact.cfm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: wgbh-links-menu_privacy-policy:http://www.wgbh.org/info/privacy.cfm
  $menu_links['wgbh-links-menu_privacy-policy:http://www.wgbh.org/info/privacy.cfm'] = array(
    'menu_name' => 'wgbh-links-menu',
    'link_path' => 'http://www.wgbh.org/info/privacy.cfm',
    'router_path' => '',
    'link_title' => 'Privacy Policy',
    'options' => array(
      'attributes' => array(
        'title' => 'Learn about our privacy policy',
      ),
      'identifier' => 'wgbh-links-menu_privacy-policy:http://www.wgbh.org/info/privacy.cfm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: wgbh-links-menu_terms-of-use:http://www.wgbh.org/info/terms.cfm
  $menu_links['wgbh-links-menu_terms-of-use:http://www.wgbh.org/info/terms.cfm'] = array(
    'menu_name' => 'wgbh-links-menu',
    'link_path' => 'http://www.wgbh.org/info/terms.cfm',
    'router_path' => '',
    'link_title' => 'Terms of Use',
    'options' => array(
      'attributes' => array(
        'title' => 'The legal stuff',
      ),
      'identifier' => 'wgbh-links-menu_terms-of-use:http://www.wgbh.org/info/terms.cfm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: wgbh-related-links-menu_a-moveable-feast-:http://www.wgbh.org/programs/A-Moveable-Feast-With-Fine-Cooking-2392
  $menu_links['wgbh-related-links-menu_a-moveable-feast-:http://www.wgbh.org/programs/A-Moveable-Feast-With-Fine-Cooking-2392'] = array(
    'menu_name' => 'wgbh-related-links-menu',
    'link_path' => 'http://www.wgbh.org/programs/A-Moveable-Feast-With-Fine-Cooking-2392',
    'router_path' => '',
    'link_title' => 'A Moveable Feast >>',
    'options' => array(
      'attributes' => array(
        'title' => 'Fine Cooking\'s tasty show',
      ),
      'identifier' => 'wgbh-related-links-menu_a-moveable-feast-:http://www.wgbh.org/programs/A-Moveable-Feast-With-Fine-Cooking-2392',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: wgbh-related-links-menu_americas-test-kitchen-:http://www.wgbh.org/programs/Americas-Test-Kitchen-87
  $menu_links['wgbh-related-links-menu_americas-test-kitchen-:http://www.wgbh.org/programs/Americas-Test-Kitchen-87'] = array(
    'menu_name' => 'wgbh-related-links-menu',
    'link_path' => 'http://www.wgbh.org/programs/Americas-Test-Kitchen-87',
    'router_path' => '',
    'link_title' => 'America\'s Test Kitchen >>',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'wgbh-related-links-menu_americas-test-kitchen-:http://www.wgbh.org/programs/Americas-Test-Kitchen-87',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: wgbh-related-links-menu_cooks-country-:http://www.wgbh.org/programs/Cooks-Country-from-Americas-Test-Kitchen-88
  $menu_links['wgbh-related-links-menu_cooks-country-:http://www.wgbh.org/programs/Cooks-Country-from-Americas-Test-Kitchen-88'] = array(
    'menu_name' => 'wgbh-related-links-menu',
    'link_path' => 'http://www.wgbh.org/programs/Cooks-Country-from-Americas-Test-Kitchen-88',
    'router_path' => '',
    'link_title' => 'Cook\'s Country >>',
    'options' => array(
      'attributes' => array(
        'title' => 'Down home cooking from the creators of America\'s Test Kitchen',
      ),
      'identifier' => 'wgbh-related-links-menu_cooks-country-:http://www.wgbh.org/programs/Cooks-Country-from-Americas-Test-Kitchen-88',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: wgbh-related-links-menu_ill-have-what-phils-having-prime-time-:http://www.wgbh.org/programs/Ill-Have-What-Phils-Having-3425
  $menu_links['wgbh-related-links-menu_ill-have-what-phils-having-prime-time-:http://www.wgbh.org/programs/Ill-Have-What-Phils-Having-3425'] = array(
    'menu_name' => 'wgbh-related-links-menu',
    'link_path' => 'http://www.wgbh.org/programs/Ill-Have-What-Phils-Having-3425',
    'router_path' => '',
    'link_title' => 'I\'ll Have What Phil\'s Having (prime-time) >>',
    'options' => array(
      'attributes' => array(
        'title' => 'A new prime-time food show from the creator of Everybody Loves Raymond',
      ),
      'identifier' => 'wgbh-related-links-menu_ill-have-what-phils-having-prime-time-:http://www.wgbh.org/programs/Ill-Have-What-Phils-Having-3425',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: wgbh-related-links-menu_lidias-kitchen-:http://www.wgbh.org/programs/Lidias-Kitchen-2412
  $menu_links['wgbh-related-links-menu_lidias-kitchen-:http://www.wgbh.org/programs/Lidias-Kitchen-2412'] = array(
    'menu_name' => 'wgbh-related-links-menu',
    'link_path' => 'http://www.wgbh.org/programs/Lidias-Kitchen-2412',
    'router_path' => '',
    'link_title' => 'Lidia\'s Kitchen >>',
    'options' => array(
      'attributes' => array(
        'title' => 'Home cooking from the renowned Lidia Bastianich',
      ),
      'identifier' => 'wgbh-related-links-menu_lidias-kitchen-:http://www.wgbh.org/programs/Lidias-Kitchen-2412',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: wgbh-related-links-menu_mind-of-a-chef-:http://www.wgbh.org/programs/The-Mind-of-a-Chef-2065
  $menu_links['wgbh-related-links-menu_mind-of-a-chef-:http://www.wgbh.org/programs/The-Mind-of-a-Chef-2065'] = array(
    'menu_name' => 'wgbh-related-links-menu',
    'link_path' => 'http://www.wgbh.org/programs/The-Mind-of-a-Chef-2065',
    'router_path' => '',
    'link_title' => 'Mind of a Chef >>',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'wgbh-related-links-menu_mind-of-a-chef-:http://www.wgbh.org/programs/The-Mind-of-a-Chef-2065',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: wgbh-related-links-menu_neighborhood-kitchens-:http://www.wgbh.org/programs/Neighborhood-Kitchens-1859
  $menu_links['wgbh-related-links-menu_neighborhood-kitchens-:http://www.wgbh.org/programs/Neighborhood-Kitchens-1859'] = array(
    'menu_name' => 'wgbh-related-links-menu',
    'link_path' => 'http://www.wgbh.org/programs/Neighborhood-Kitchens-1859',
    'router_path' => '',
    'link_title' => 'Neighborhood Kitchens >>',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'wgbh-related-links-menu_neighborhood-kitchens-:http://www.wgbh.org/programs/Neighborhood-Kitchens-1859',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: wgbh-related-links-menu_simply-ming-:http://www.wgbh.org/programs/Simply-Ming-86
  $menu_links['wgbh-related-links-menu_simply-ming-:http://www.wgbh.org/programs/Simply-Ming-86'] = array(
    'menu_name' => 'wgbh-related-links-menu',
    'link_path' => 'http://www.wgbh.org/programs/Simply-Ming-86',
    'router_path' => '',
    'link_title' => 'Simply Ming >>',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'wgbh-related-links-menu_simply-ming-:http://www.wgbh.org/programs/Simply-Ming-86',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: wgbh-support-links-menu_become-a-member:http://www.wghb.org/support
  $menu_links['wgbh-support-links-menu_become-a-member:http://www.wghb.org/support'] = array(
    'menu_name' => 'wgbh-support-links-menu',
    'link_path' => 'http://www.wghb.org/support',
    'router_path' => '',
    'link_title' => 'Become a Member',
    'options' => array(
      'attributes' => array(
        'title' => 'Find out how to become a WGBH member',
      ),
      'identifier' => 'wgbh-support-links-menu_become-a-member:http://www.wghb.org/support',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: wgbh-support-links-menu_corporate-sponsorship:http://www.wgbh.org/support/corporateSponsorship.cfm
  $menu_links['wgbh-support-links-menu_corporate-sponsorship:http://www.wgbh.org/support/corporateSponsorship.cfm'] = array(
    'menu_name' => 'wgbh-support-links-menu',
    'link_path' => 'http://www.wgbh.org/support/corporateSponsorship.cfm',
    'router_path' => '',
    'link_title' => 'Corporate Sponsorship',
    'options' => array(
      'attributes' => array(
        'title' => 'We love it when corporate sponsors help out, too',
      ),
      'identifier' => 'wgbh-support-links-menu_corporate-sponsorship:http://www.wgbh.org/support/corporateSponsorship.cfm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: wgbh-support-links-menu_donate:http://www.wgbh.org/support/makeagift.cfm
  $menu_links['wgbh-support-links-menu_donate:http://www.wgbh.org/support/makeagift.cfm'] = array(
    'menu_name' => 'wgbh-support-links-menu',
    'link_path' => 'http://www.wgbh.org/support/makeagift.cfm',
    'router_path' => '',
    'link_title' => 'Donate',
    'options' => array(
      'attributes' => array(
        'title' => 'We can\'t do it without you',
      ),
      'identifier' => 'wgbh-support-links-menu_donate:http://www.wgbh.org/support/makeagift.cfm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: wgbh-support-links-menu_volunteering:http://www.wgbh.org/support/volunteer.cfm
  $menu_links['wgbh-support-links-menu_volunteering:http://www.wgbh.org/support/volunteer.cfm'] = array(
    'menu_name' => 'wgbh-support-links-menu',
    'link_path' => 'http://www.wgbh.org/support/volunteer.cfm',
    'router_path' => '',
    'link_title' => 'Volunteering',
    'options' => array(
      'attributes' => array(
        'title' => 'Short on cash but like what we do? There are other ways to help!',
      ),
      'identifier' => 'wgbh-support-links-menu_volunteering:http://www.wgbh.org/support/volunteer.cfm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A Moveable Feast >>');
  t('About');
  t('About WGBH');
  t('America\'s Test Kitchen >>');
  t('Become a Member');
  t('Chew On This');
  t('Contact Us');
  t('Contact WGBH');
  t('Cook\'s Country >>');
  t('Corporate Sponsorship');
  t('Donate');
  t('FAQs');
  t('Home');
  t('I\'ll Have What Phil\'s Having (prime-time) >>');
  t('Lidia\'s Kitchen >>');
  t('Mind of a Chef >>');
  t('Neighborhood Kitchens >>');
  t('Neighborhood Nosh');
  t('Privacy Policy');
  t('RSS Feed');
  t('Recipes');
  t('Reviews');
  t('Simply Ming >>');
  t('Table Talk');
  t('Terms of Use');
  t('That\'s the Spirit');
  t('Volunteering');

  return $menu_links;
}
